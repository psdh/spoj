#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <assert.h>
//An adjacency list is an array of linked list.Below is the structure of the nodes of the linked list.
typedef struct node{
    int vertex;
    struct node* next;
}node;
//This structure holds the linked lists header
typedef struct list{
    struct node* head;
}list;
//The graph holds headers of multiple linkedl list and a size parameter. works both directed and undirected graphs.
typedef struct graph{
    int size;
    struct list* array;
}graph;
//a function to add new nodes
node* newNodeAdd(int vertex){
    node* newNode = (node*) malloc(sizeof(struct node));
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;
}
//a function to create a graph depending on the number of vertices
graph* createGraph(int numofvertices){
    graph* actgraph = (graph*) malloc(sizeof(graph));
    actgraph->size = numofvertices;
    actgraph->array = (list*) malloc(numofvertices*sizeof(list));
    int i;
    for(i=0;i<numofvertices;++i){
        actgraph->array[i].head =NULL;
    }
    return actgraph;
}
//a function to add an edge into the graph
void insertEdge(graph* actgraph,int src,int dest){
    node* newNode = newNodeAdd(dest);
    newNode->next = actgraph->array[src].head;
       actgraph->array[src].head = newNode;
}
//a function to print the graph
void graphPrinter(graph* actgraph){
    int v;
    for(v=0;v<actgraph->size;++v){
        node* root = actgraph->array[v].head;
        printf("Adjacency list of vertex %d ",v+1);
        while(root){
            printf("->%d ",root->vertex+1);
            root=root->next;
        }
        printf("\n");
    }
}
//a function to clone a given linked list recursively
node* Clone(node* list) {
    if (list == NULL) return NULL;
    node* result = (node*) malloc(sizeof(node));
    result->vertex = list->vertex;
    result->next = Clone(list->next);
    return result;
}
//a function that finds the shortest path using BFS algorithm.
void shortestPath(graph* actgraph,int src,int dest){
    int v = actgraph->size;
    int parent[v];
    int level[v];
    int think[v];
    int x =0;
    for(x=0;x<v;x++){
        parent[x]=-1;
        level[x]=-1;
        think[v]=-1;
    }
    parent[src]=0;
    level[src]=0;
    int i;
    node* frontier = (node*)malloc(sizeof(node));
    node* next =(node*)malloc(sizeof(node));
    frontier->vertex=src;
    frontier->next=NULL;
    while(frontier){
        int flag =0;
        next->next=NULL;
        next->vertex=-1;
        while(frontier){  
            int u = frontier->vertex;
            node* root = actgraph->array[u].head;
            while(root){
                int v = root->vertex;
                if(level[v]==-1){
                    flag=1;
                    level[v]=i;
                    parent[v]=u;
                    if(next->vertex==-1){
                        next->vertex=v;
                        root=root->next;
                        continue;
                    }
                    node *refer = (node*)malloc(sizeof(node));
                    refer->vertex=v;
                    node* temp = refer;
                    refer->next=next->next;
                    next->next=refer;

                }
                root=root->next;
            }
            frontier=frontier->next;
        }
        if(flag==0){
            break;
        }
        frontier=Clone(next);
        i=i+1;
    }
    // a commented function that prints the path in reverse order   
    // printf("%d <-",dest+1);
    // while(parent[dest]!=src){
    //     printf("%d <- ",parent[dest]+1);
    //     dest=parent[dest];
    // }
    // printf("%d \n",src+1);
    //a script to print the linked list in the right order
    think[0]=dest;
    int path = 1;
    i = 1;
    while(parent[dest]!=src)
    {   if(parent[dest]==-1){
        path=0;
        break;
        }
        think[i]=parent[dest];
        i = i + 1;
        dest = parent[dest];
    }
    if(path==1){
    think[i]=src;
    while(i!=0){
        printf("%d->",think[i]+1);
        i--;
    }
    printf("%d \n",think[0]+1);
    }
    else{
        printf("No path Possible \n");
    }
}
//the main function that reads the file.and passes it to the createGraph,insertEdge,graphPrinter,shortestPath functions
int main(int c,char* argv[]){
    FILE *file = fopen(argv[1],"r");
    int V;
    char line[126];
    //running through the file once to find the number of vertices
    while ( fgets ( line, sizeof line, file ) != NULL ) 
      {
         sscanf(line,"%d: ",&V); 
      }
    fclose(file);  
    struct graph* actgraph = createGraph(V);
    file =fopen(argv[1],"r");
    while ( fgets ( line, sizeof line, file ) != NULL ) 
      {
         sscanf(line,"%d: ",&V);
         char *p = strchr(line,' ')+1;
         if (p && p[0] == '\n') {
            continue;
         }
         //tokenising the comma separated vertices
         char *token = strtok(p,",");
         while( token != NULL ) 
        {   int r;
            sscanf(token,"%d",&r);
            // printf("Adding edge from %d to %d \n",V,r);
            insertEdge(actgraph,V-1,r-1);
            token = strtok(NULL, ",");
        }


      }
    fclose(file);   
    graphPrinter(actgraph);
    int t;
    printf("Enter Number of Test Cases : \n");
    scanf("%d",&t);
    while(t!=0){
        
        printf("Enter vertices from(i) and to(j) \n");
        int a,b;
        scanf("%d %d",&a,&b);
        if(a > V || b > V || a < 1 || b < 1){
            printf("Please Enter Numbers Such That 1<=a,b<=%d \n",V);
            continue;
        }
        printf("One of the shortest path is : \n");
        shortestPath(actgraph,a-1,b-1);
        t--;
    }
}