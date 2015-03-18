#include <iostream>
#include <stdio.h> 
using namespace std;

int main(void)
{
   int n ;
	while(scanf("%d" , &n) )
	{
		long int k ;
		int min[n+1];
		for(int i = 0 ;i<n ; i++)
		min[i] = 99999999;
		
		min[0] = 0;
		
		for( int i =1 ; i <= n ; i++)
		{
			if( (min[i/2] + min[i/3] + min[i/4]) > i)
			min[i] = min[i/2] + min[i/3] + min[i/4];
			else
			min[i] = i;		
		}
		cout<<min[n]<<endl;
	
	}	
}
