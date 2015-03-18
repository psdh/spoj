#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{	
	int t;
	cin>>t;
	while(t--)
{

	long long int a=192;
	long long int i =0;
	long  long int k;
	scanf("%lld" , &k);
	
	int b,temp;
	int on , tn ,hn;
	
	while( k != i)
		{
			b = (int) (a%1000);
			
			on = b%10;
			tn = (b%100 -on)/10;
			hn = b /100;
			
			temp = on*b + (tn *b*10)%1000 + (hn * b*100)%1000;
			temp = temp%1000;
			
			temp = on*temp + temp *tn*10 + temp * hn*100;
			
			temp = temp%1000;
			
			
			if(temp == 888)
				{
					i++;
					a++;
				}
			else
				a++;
		}
		a--;
		printf("%lld\n" , a);
		
}		
}
		
	


