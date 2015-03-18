#include <stdio.h>


int main(void)
{
/*	
	set<long long int> s;
	int n;
	scanf("%d",&n);
	long long int cu,temp;
	for(int i =0;i<n;i++)	
	{
		scanf("%lld",&temp);
		
		if(s.count(temp) ==1)
		s.erase(temp);
		else
		s.insert(temp);
		
	}
	set<long long int>::iterator it = s.begin();
	printf("%lld\n",*it);
*/


/*
	int n;
	scanf("%d",&n);
	long long int temp,k=1;
		
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&temp);
	
		if(k %temp ==0)
		k = k/temp;
		else
		k*=temp;
		
	}	
	
	printf("%lld\n",k);*/

	long long int temp, result ,n;
	
	result =0;
	
	scanf("%lld",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&temp);
		
		result = result^temp;
			
	}

	printf("%lld\n",result);

	
}
