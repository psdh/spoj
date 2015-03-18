#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#define E 1e-7;

using namespace std;


int gcd(int a , int b)
{

int r;

while(b)
{
	
	r=a%b;
	a=b;
	b=r;

}
return a;

}


int main(void)
{
setprecision(4);
int t;
cin>>t;
	while(t--)
	{

		double k ;
		cin>>k;


		k = k-floor(k);

		cout<<k<<endl;

		k=k*10000;
			
		k= round(k);
		int K = (int)k;
	
		cout<<K<<endl;
		cout<<10000/gcd(10000,K)<<endl;
	
	}
}
