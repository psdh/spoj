#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int n;

	cin>>n;
	int t =1;	
	int p;

	if(n ==1)
	cout<<t<<endl;
	else
	if(n ==2 )
	cout<<2<<endl;
	else
	if(n ==3)
	cout<<3<<endl;
	else
	if(n ==4)
	cout<<5<<endl;
	else
	{
		t=5;
		for(int i=5 ; i<=n ;i++)
		{
			int j = 1;
			/*if( i%2 ==0)
			p = i/2 -1;
			else
			p = i/2;	
			*/
			p = sqrt(i);
			while(j <= p)
			{
				if( i % j ==0)
				t++;
				j++;
			}		
	
	
	
		}
		cout<<t<<endl;
	}


}
