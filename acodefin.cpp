#include <iostream>
using namespace std;

int main(void)
{
	string s;
	cin>>s;

	while(!(s[0] =='0'&&s.length() ==1))
	{
	

		if(s[0] == '0')
		{
			cout<<0<<endl;
			cin>>s;
			continue;
		}
	
		int n =s.length();
		long long int a[n];
		int q , b;	
	
		a[0] =1;
		a[1]=1;
	
		bool flag = true;
	
		for(long long int i =2;i<=n;i++)
		{
			q = s[i-2] -'0';
			b = s[i-1] - '0';
			
			if(b ==0)
			{
		
				
				if( q >=1 && q <3)
				{
					
					if(i>=3)
					a[i] = a[i-2];
					else
					a[i] =a[i-1];
					continue;
				}
				else
				flag = false;	
			}
			else
			a[i] = a[i-1];
			
			if(q*10 +b < 27 && q*10 + b > 9)
				a[i]+=a[i-2];
	
		}
		
		
		
		
	if(flag)
	cout<<a[n]<<endl;
	else
	cout<<0<<endl;
	cin>>s;

	
	}
 
}
