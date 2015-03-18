#include <iostream>
#include <math.h>

using namespace std;
int main(void)
{

int t, t1 = 0 ;
cin>>t;
while(t1 < t)
{

	int n,m;
	cin>>n>>m;
	int l = sqrt(m);
	int a[m + 1];
	for(int i =0 ; i <=m ; i ++)
	a[i] = 0;
	
	
	int j = 2 ;
	int p;

	for(int k=2 ; k <= l ;k++)
	{
		if(a[k] == 0)
		{
			p = k*j;
	
			while( p <= m)
			{
				a[p]=1;
				j++;
				p = k*j;
			}
		j=2;
		}
	
	}
	
	if(n < 2)
	n=2;
	
	for(int k = n ; k<=m ; k++)
	if(a[k] == 0)
	cout<<k<<endl;
	t1++;	
	}

}
