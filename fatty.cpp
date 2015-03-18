#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{	
	int t;
	cin>>t;
	while(t--)
{

	long long int ans;
	long  long int k;
	scanf("%lld" , &k);
	

	int a[] = { 192 , 442, 692 , 942};

	

		if(k <= 4)
		cout<<a[k-1]<<endl;
		else
		{
			int p ;	
		if(k%4==0)
		p = -58;
		else
		p=a[k%4 -1];			
			
		ans  = (k/4)*1000 + p;

		printf("%lld\n" , ans);
		}
}		
}
		
	


