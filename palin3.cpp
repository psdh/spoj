#include <iostream>
#include <string>

using namespace std;

string work(string s, int n )
{
	int i ;
	if(n%2 ==0)
	i = (n-1)/2;
	else
	i= n/2;
	
	for(; i >=0 ; i--)
	{
		if((s[i] - 48) < 9)
		{	
			s[i]++;
			break;
		}
		else
		s[i] = 48;
	}

	if(s[0] == '0')
	{
		s='1'+s;
		n++;	
	}
	
	for(int i =0 ; i<=n/2 ; i++)
	s[n-i-1] = s[i];

	return s;


}

int main(void)
{

	int  t;

	cin>>t;

	while(t--)
	{
		string s;
		cin>>s;
		string ans;

		bool flag1 =false;	
		int j=0;			
		
		string t =s;
		
		
		bool flag=true; 
		int n = s.length();	
		
		if(n ==1)
		{
			cout<<work(s,1)<<endl;
			continue;
		}
	
		for(int i=0;i<=n/2;i++)
		if(s[i]!= s[n-i-1])
		{
			flag = false;
			break;	
		}
	
		bool check = false;
		if(!flag)
		{
			for(int i =0 ; i<=n/2 ; i++)
			s[n-i-1] = s[i];
			
			for(j = n/2 ; j < n ; j++)
			if(s[j] > t[j])
			{
				check = true;
				break;
			}
			
			if(!check)
			{
				s = work(s,n);				
			}	
			
			cout<<s<<endl;

		}
		else	
		{
			
			s =  work(s,n);			
			cout<<s<<endl;
		}

	}
}
