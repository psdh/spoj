#include <stdio.h>
#include <math.h>
int reverse(int i)
{ 
    int sum = 0, j = 0 ; 
    int k = i;
    for(; k != 0; j++)
        k = k/10;
      
    int size = j;
    int temp = 0;
    
    for(int j = 0; j < size ; j++)
    {
         temp = i % 10 ;
         sum += temp * pow(10, size - 1 - j);
         i = i/10;
          
    }
    return sum;
    
}

int main(void)
{
    int n ;
    int t = 0;
    scanf("%d", &n);
    
    while (t < n )
    {
        int a, b ;
          scanf("%d %d", &a, &b);
     
        
        a=reverse(a);
        b=reverse(b);
        
        int sum = reverse(a+b);
        
        printf("%d\n", sum);
        t++;
    }
}
