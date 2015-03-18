#include <iostream>
#include <math.h>

using namespace std;

int main(void )
{

	int t ;
	
	cin>>t;

	while(t--)
	{
		long long n ;
		long long sum = 0 ;
		cin>> n;
		long long i=0;
		long long temp;
		while(i < n)
		{
		cin>>temp;
		sum += temp;
		i++;
		}
		double f = (double)sum/n;
	//	cout<<f<<endl;	
		if(f - floor(f) == 0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
