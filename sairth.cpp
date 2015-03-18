#include <iostream>
using namespace std;

int main(void)
{
	int t ;
	cin>>t;
	while(t--)
	{
		long long int a , b ,ans =0;
		char ch;
		cin>>a;
		cin>>ch;
		while(true)
		{
		
			
			cin>>b;
			if(ch == '+')
			ans = a+b;
			else
			if(ch == '-')
			ans = a-b;
			else
			if(ch == '*')
			ans = a*b;
			else
			if(ch == '/')
			ans =a/b;
			
			cin>>ch;
			if(ch == '=')
			{
			cout<<ans<<endl;
			break;
			}
			else
			a = ans;
		}
	}
}
