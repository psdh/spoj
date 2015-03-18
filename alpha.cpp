#include <iostream>
#include <stdlib.h>

using namespace std;


int main(void)
{
	string s;
	cin>>s;

	
	
	while(s[0] != '0')
	{

		int n = s.length();
		int a[n];
		int ans[n] ;	
		for(int i = 0 ; i < n ; i++)
		{
	//	cout<<s[i]<<endl;
		ans[i]=0;	
		a[i]=s[i] - 48;
	//	cout<<a[i]<<endl;
		}	
	// = {0};

	//	cout<<*a<<endl;
		bool flag = false;
		ans[0]=1;
		if(a[0]*10 + a[1] <27)
		{
		ans[1] = 2;
		flag = true;
		}
		else
		ans[1]=1;
			
		for(int i = 2; i < n ; i++)
		{
			
			if(a[i-1] * 10 + a[i] <27)
			{
				if(!flag)
				{
				ans[i] = 2*ans[i-2];
				flag = true;
				}
				else
					if(i==2)
					ans[i] = 3;
					else
					ans[i] = 3*ans[i-3];
			}
			else
			{
			ans[i] = ans[i-1];
			flag=false;
			}
		}
	
		cout<<ans[n-1]<<endl;
		


		cin>>s;
	}	
	
	

	



}
