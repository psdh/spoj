#include <stdio.h>

int main(void)
{
    int j,t =0;
    j=0;
    scanf("%d\n", &t);
    while (j < t)
    {
    	long int n = 0;
    	long int n2 =0;
    	scanf("%li %li", &n, &n2);
    
  	  int a[n2 + 1];
    
   	 for(int i = 0; i<= n2; i++)
   	 a[i]=1;
       	 
   	 for(int i = 2; i <= n2; i++)
   	 {
             if(a[i] == 1)
        	{
           	 for( int k = 2; k <= n2/i ; k++)
            	a[k*i] = 0;
        	}     
    	}
    
   	 for(int i =n; i<= n2 ; i++)
    	if(a[i] ==1)
   	printf("%d\n",i);
   	
   	j++;
   	}
    
    
}
