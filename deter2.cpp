#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;


void show(int a[5][5],int size)
{
	for(int i=0;i<size;i++)
	{
	for(int j=0;j<size;j++)
	cout<<a[i][j]<<"\t";
	cout<<endl;
	}
	cout<<endl;

}
int calc(int a[5][5] , int size)
{
	if(size ==2)
	{
		return (a[0][0] * a[1][1] - a[0][1]*a[1][0]);
	}
	
	long long int ret =0;
	
	int k[5][5];
	int c ,d ;	
	int p =1;
		
	for(int t =0;t<size;t++)
	{
	
		c = 0, d=0;
		
		for(int i =1;i<size;c++,i++)
		{
			for(int j =0;j<size;j++)
			{
				if(j==t)
				continue;
				else
				{
			
				k[c][d++] = a[i][j];
				}
			}	
			d=0;
		}
		show(k,size-1);
		ret += p*a[0][t]*calc(k,size-1);

		p *=-1;
	}
	return ret;
}

int main(void)
{
	int size;
	cout<<"Enter size"<<endl;

	cin>>size;

	int a[5][5];
	
	for(int i=0;i<size;i++)
	for(int j =0;j<size;j++)
	cin>>a[i][j];
	
	show(a,size);

	cout<<calc(a,size)<<endl;
}
