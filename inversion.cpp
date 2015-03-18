#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	int t;
	cin>>t;

	while(t--)
	{
	//	string empty;
	//	cin>>empty;
	//	cin>>endl;
		int n ;
		scanf("\n%d",&n);

		int a[n];

		long long int  count =0;
			
		for(int i =0 ;i<n;i++)
		cin>>a[i];
			
		for(int i =0;i<n-1 ;i++)
		{
			for(int j =i+1;j<n;j++)
			{
				if(a[i] > a[j])
				count++;

			}	

		}

		cout<<count<<endl;

	}









}
