#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

			//remember for which values of size the result has already been found out 	
long long d[10005];						// saves the corresponding result 


int main(void)
{
	int t;
	int t1=0;
	
	cin>>t;

	while(t1<t)
	{
		int m;
		cin>>m;
	
		long long a[m];
	
		for(int i =0 ; i<m;i++)
		cin>>a[i];
		
			d[0] = a[0];
			d[1] = max(d[0] , a[1]);
	
			for(int i = 2 ; i < m ; i++)
				d[i] = max( a[i] + d[i-2] , d[i-1]);
		
		cout<<"Case "<<t1+1<<": "<<d[m-1]<<endl;
		
		
			
		t1++;


	}

}
