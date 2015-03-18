#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

long long int counter =0;

long long int* merge( long long int a[] , int n , long long int b[] , int m  );
long long int* sort(long long int a[] , int n ) ;

int main()
{
	int t;
	scanf("%d",&t);

while(t--)
{
    int n ;
	scanf("%d",&n);
    
    long long  int a[n];
    
    for(int i = 0 ; i < n ;i++)
    	scanf("%lld",&a[i]);    
    
    
    long long int*c =  sort(a , n ) ; 
   

	

	cout<<::counter<<endl;
	::counter=0;
}

	return 0 ;    
     
}

long long int* merge(long long  int a[] , int n , long long int b[] , int m)
{
   int i =0 , j=0 , k=0;
  long long  int* c = new long long int[m+n];
   for(; i < n && j < m ; k++ )
   {
      if(a[i] > b[j])
      {  
	c[k] = b[j] ;
	::counter += n-i;        
	j++;
	 
       
      }
      else 
      {
       c[k] = a[i];
        i++;
      }
   }
    
    while(j < m ) 
    {
        c[k] = b[j] ;
        j++;
        k++;
    }  
    while(i < n ) 
    {
	
        c[k] = a[i] ;
        i++;
        k++;
	
    }
  
    return c;
}

long long int* sort(long long int a[] , int n ) 
{   
    if(n < 2 )
    return a ; 
 
        long long int* a1 = sort( a , n/2 );
      long long   int* a2 = sort( a + n/2 ,n - n/2);
        long long int*c =merge(a1, n/2 , a2 , n - n/2);
        return c ;
   
}

