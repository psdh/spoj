#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{

int t, t1 =0 ;
cin>>t;
while(t1 < t)
{

int m, n;
cin>>n;
cin>>m;


int l = sqrt(m);

2001];


for(int i =1 ; i<= l ; i++)
a[i] = 0;

int j =2;
int p ;
	
		for(int k=2 ; k <= l ;k++)
        	{
                	if(a[k] == 0)
                	{
                       	 	p = k*j;

                        	while( p <= l)
                        	{
                               	 	a[p]=1;
                                	j++;
                               		p = k*j;
                        	}
                	j=2;
                	}

        	}
int arr[4000];
int size = 0 ;

for( int k = 2 ; k<= l ; k++)
	if(a[k] == 0)
	{
		arr[size] = k;
		size++;
	}



for(int i = ( n >= 2)? n: 2; i <= m ; i++)
{
	bool div = true;
	
	for(int k = 0 ; k < size ; k++)
	{
				
		if( i > arr[k] && i % arr[k] == 0)
		{
		div = false;
		break;
		}
	}
	
if(div)
cout<<i<<endl;
}

t1++;
}
return 0;
}


