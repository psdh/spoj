#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

long long int counter =0;

long long int* merge( long long int a[] , int n , long long  int b[] , int m  );
long long int* sort(long long int a[] ,int n ) ;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{

	    int n ;	
		cin>>n;
    
	    long long int a[n];	
    
	    for(int i = 0 ; i < n ;i++)		
	    scanf("%lld",&a[i]);    
    	
    
    	long long int*c =  sort(a , n ) ; 
  	
		printf("%lld\n",::counter);
		::counter =0;
		
}   
     
}

long long int* merge( long long int a[] , int n , long long int b[] , int m)
{
   int i =0 , j=0 , k=0;
   long long int* c = new long long int[m+n];

	for(i=0;i<n;i++)
	c[k++] = a[i];
	
	

	int size = n;
	int gh ;
	for(j=0;j<m ;size++,j++)
	{
		k=size-1;
		

		int temp= b[j];

		while(temp <c[k] && k >= 0)
		{
			::counter++;
			c[k+1]=c[k];
		
			k--;
	
		}
		c[k+1] = temp;

	}
	
  
    return c;
}

long long int* sort(long long int a[] , int n ) 
{   
    if(n < 2 )
    return a ; 
 
        long long int* a1 = sort( a , n/2 );
        long long int* a2 = sort( a + n/2 ,n - n/2);
        long long int*c =merge(a1, n/2 , a2 , n - n/2);
        return c ;
   
}

