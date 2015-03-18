#include <iostream>

using namespace std;

int main(void)
{

int a[150000];

for(int i =1 ; i<= 150000 ; i++)
a[i] = 0;

int j =2;
int p ;
	
		for(int k=2 ; k <= 150000 ;k++)
        	{
                	if(a[k] == 0)
                	{
                       	 	p = k*j;

                        	while( p <= 150000)
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

for( int k = 2 ; k<= 150000 ; k++)
	if(a[k] == 0)
	{
		arr[size] = k;
		size++;
		
		if(size == 10000)
		{
		cout<<"\n\n\nthis is is "<< k;
		break;
		}
		else 
	cout<<k<<endl;
	}





}
