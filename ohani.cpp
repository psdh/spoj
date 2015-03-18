#include <iostream>
#include <math.h>

using namespace std;
long long int powe(int n )
{
	if(n <= 29)
	return pow(2,n);
	
	int k = n % 35;
	int p = n / 35;
	long long int sum =0;
	for(int i =0;i<p;i++)
	{
		sum += pow(2,35);
		if(sum > 1000000007)
		sum = sum % 1000000007;
	}
	sum  += pow(2,k);
	sum = sum % 1000000007;
	return sum;
}
int main(void)
{
	int t,t1 =0;
	//cin>>t;
	cout<<"{";
		
	{
		for(int n =1;n<=100000;n++)
		{
	
		long long int p =1;
	
		
		p = powe(n-1) + (n-1)*powe(n-2);
		p = p % 1000000007;
		
		cout<<p<<" , ";
		}
		//t1++;	
		cout<<"};";
	}
}
