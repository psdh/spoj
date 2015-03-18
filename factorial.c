#include <stdio.h>
#include <math.h>

int main(void)
{
    int t1 = 0;
    int t;
    scanf("%d", &t);
    while ( t1 < t)
    {
        int n;
        scanf("%d",&n);
        int k;
        k = 0;
        int nz = 0;
        
      while(pow(5 , k +1) < n )
      {
          nz += n / pow(5, k +1);
          k++;
           
            
      }
        printf("%d\n", nz);
        
        
        t1++;
   } 
    
    
}
