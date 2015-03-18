#include<stdio.h>

void NoWays(int start,int end,int check);
int c[10]={1,1,1,1,1,1,1,1,1,1},sum,b=0;
int keep[11]={0};
int ARRAY[10][10]={0};
int no;int len;
void main(int argc ,char*argv[])
{
   /////////////////////////file input////////////////////////////
    FILE *f;
    f=fopen(argv[1],"r");

    int i,j,k;

    printf("Number of vertices ");
    scanf("%d",&no);
    for(i=0;i<no;i++)
   {
       j=0;
       k=fgetc(f);
       while(k!='\n')
            {
            ARRAY[i][j]=k-'0';

//            printf("%d",ARRAY[i][j]);
            k=fgetc(f);
            j++;
            }

//            printf("\n");
    }

    /////////////////////////file input////////////////////////////

printf("Path length ");
scanf("%d",&len);
//int check=0;
int check=0;
for(i=0;i<no;i++)
{
    for(j=i+1;j<no;j++)
    {
        c[i] = 0;
        NoWays(i,j,0);
        check=0;
        if(b==1)
        {
            b=0;
            sum=0;
            printf("(%d,%d)\n",i+1,j+1);
        }

}

}
}

 void NoWays(int start,int end,int check)
{
 // printf("%d",no);
if(b==0){
  if(start==end)
  {
      int s;
      sum =0;
      //printf("%d",check);
      for(s=0;s<check;s++)
      {
          sum=sum+keep[s];
          //printf("%d ",keep_check[s]);
          keep[s]=0;

      }

      if(sum == len)
   {b++;}
  // sum=0;


   }
  else
  {
    int i=start,j;

        for(j=0;j<no;j++)
        {
          if(ARRAY[i][j]!=0)
          {
              if(c[j]==0);
              else
                {
                   c[j] = 0;
                   keep[check] = ARRAY[i][j];
                 //  printf("%d",ARRAY[i][j]);
                   NoWays(j,end,check+1);
                   c[j] = 1;
                }
          }

    }
  }
}
}
