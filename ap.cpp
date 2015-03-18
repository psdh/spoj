#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{

	int t;
	cin>>t;


	while(t--)
	{
		long long int a3 , an , sum ;
		scanf("%lld %lld %lld", &a3,&an,&sum);

		long long int k;

		k=  sum*2/(a3+an) ;
	
		printf("%lld\n" , k);

		long long int temp ;

		temp=(an - a3) /(k-5);
		long long int a;
		a= a3 - 2*temp;


		for(long long int i =0; i<k;i++)
		cout<<a+i*temp<<" ";

		cout<<endl;	
	}



}
