#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int main(void)
{
	int t , t1=0;
	cin>>t;
	while(t1 < t)
	{
		double f ;
		cin>>f;
	
		long long i =1 ;
		double k ;
		
		while(true)
		{
			k = f*i;
			
			if( abs(ceil(k) - k)  > 0.0001 )
			{
				cout<<i<<endl;
				break;
			}
			i++;
		}
		
		t1++;
	}
}
