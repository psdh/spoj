#include <iostream>
#include <stdio.h>

using namespace std;


long long bSearch(long long a[] ,long long n, long long s)
{
long long high , mid , low;
high = n-1;
low = 0;
long long k;
while(low<= high)
{
	k=mid= (low+high)/2;

	if(a[mid] == s)
	{
		
		while(a[--k] == s);
		return ++k;
	}
	else
	if(a[mid] > s)
	high = mid-1;
	else
	low= mid+1;	 
}
	return -1;
}


int main(void)
{
	long long t,k;
	scanf("%lld %lld", &t,&k);
	printf("%lld %lld", t,k);
	
	
	
	long long a[t];
	long long i =0;
	
	for(i=0 ; i<t; i++)
	scanf("%lld",&a[i]);
	
	i =0;

	for(i=0 ; i<k;i++)
	{
		long long q;
		scanf("%lld" , &q);		
		printf("%lld\n",bSearch(a,t,q));
		
		

		
	}
	
}
