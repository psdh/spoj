#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

bool check[10005] = {false};				//remember for which values of size the result has already been found out 	
long long what[10005];						// saves the corresponding result 

long long  ma(long long a[], int m )
{
	
	if(m ==1)															// this function basically implements :      ma ( m  -2 ) + a[ m -1 ] 
	return a[0];
	else
	if(m==2)
	return max(a[0] , a[1]);
	else
	if(check[m])
	return what[m];
	else
	{
		long long  k=0;
		long long p , q =0;
		for(int i =2 ; i<m ; i++)
		{
			if(check[i-1])
			p = what[i-1];
			else
			{
				p = ma(a,i-1);
				check[i-1] = true;
				what[i-1] = p;			
			}
			if(check[i])
			q=what[i]; 
			else
			{
	
				q = ma(a,i);
				check[i] = true;
				what[i] = q;
			}
			
			k=max(p + a[i] , q); 
			check[i+1] = true;
				what[i+1] = k;
		}	
	
		return k;
	}
}
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
	
	
		cout<<"Case "<<t1+1<<": "<<ma(a, m)<<endl;
		
		
			
		t1++;


	}

}
