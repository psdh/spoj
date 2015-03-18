#include <math.h>
#include <stdio.h>

int main(void)
{
	int t ;
	scanf("%d",&t);
	while(t--)
	{
		double f ;
		scanf("%lf",&f);
		int i =1 ;
		double k ;
		
		while(1)
		{
			k = f*i;
			
			if((ceil(k) - k)  < 0.00001 ||  ( k- floor(k) < 0.00001))
			{
				printf("%d\n",i);
				break;
			}
			i++;
		}
		
		
	}
}

