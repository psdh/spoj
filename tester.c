
#include <cs50.h>
#include <stdio.h>


bool search(int value, int values[], int n)
{
    // implementing binary search
    
    int flag =0;
    if(n < 0)
        return false;
    else
    {
        int mid , low =0 , high = n-1;
       
        while ( low < high)
        {
            mid = ( high + low ) / 2;
            if(values[mid] == value)
            {
            flag = 1;
            break;
            }
            else
                if (value > values[mid] )
                low = mid +1 ;
                else 
                high = mid - 1;
                printf("%d\n", mid);
        }
        
    }
    printf("flag %d\n", flag);
    if (flag == 1)
    return true;
    else 
    return false;
    
}
int main(int argc, char* argv[])
{
    int a[100];
    
    for( int i=0; i <100 ; i++)
    {
        a[i]=GetInt();
        
    }
    int b = (int ) search( atoi(argv[1]), a , 1000);
    printf("%d", b);
    return 1; 
}
