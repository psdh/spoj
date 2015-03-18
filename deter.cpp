#include <stdio.h>
#include <iostream>
using namespace std;


void show(int a[][],int size)
{
	for(int i=0;i<size;i++)
	{
	for(int j=0;j<size;j++)
	cout<<a[i][j]<<"\t\t";
	cout<<endl;
	}

}
int calc(int a[][] , int size)
{
	if(size ==2)
	{
		return (a[0][0] * a[1][1] + a[0][1]*a[1][0]);
	}
	
	long long int ret =0;
	
	int k[size-1][size-1];
	
	for(int t =0;t<size;t++)
	{
		memset(k,0,sizeof(k)*(size-1)*(size-1));
	
		int c = 0, d=0;
		for(int i =0;i<size;i++)
		{
			if(i == t)
			continue;
			else
			for(int j =0;j<size;j++)
			{
				k[c++][d++] = a[i][j];
				
			}	
	
		}
		show(k,size-1);
		ret += calc(k,size-1);

	}
	return ret;
}

int main(void)
{
	int size;
	cout<<"Enter size"<<endl;

	cin>>size;

	int a[size][size];
	
	for(int i=0;i<size;i++)
	for(int j =0;j<size;j++)
	cin>>a[i][j];
	
	show(a,size);

	cout<<calc(a,size)<<endl;
}
