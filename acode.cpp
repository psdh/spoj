#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

long long int ans[5010] = {0};
bool flag = true;

long long int solve(string s , int n)
{

	if(n ==1)
	return 1;
	
	int a = s[0] -48;
	int b = s[1] -48;
		
	if(a ==0 )
	{
	flag = false;
	return 0;
	}
	
	long long int ret=0;
	
	s.erase(0,1);
	
	if(ans[s.length()]  ==0)
	ans[s.length()] = solve(s, n -1 );
	 
	ret += ans[s.length()];
	
	int k = 10*a + b ;	
	
	if(k < 27 )
	 {
		
		s.erase(0,1);
		if(n ==2)
		ret += 1;	
		else
		{
			
			if(ans[s.length()]  ==0)
        		ans[s.length()] = solve(s, n -2 );
        
        		ret += ans[s.length()];
//		ret += solve(s, n -2);
		}
		
		return ret ;
         }
	
	if(k > 27 && b ==0)
	return 0;
	
	return ret;

}

int main(void)
{
	string s;
	cin>>s;
	


	
	while(!(s[0] =='0' && s.length() ==1))
	{
	
	int n = s.length();

	long long int k=0;
	
	if(s[0] =='0')
	{
		cout<<0<<endl;
		cin>>s;
		continue;
	}

	for(int i =1;i<n;i++)
	{
		
		if(s[i] =='0')
		{
			int a = s[i-1] - 48;
				
			if(a < 3)
			s.erase(i-1,i+1);
			else
			{
				flag = false;
				break;	
			}
			i-=2;
			n = n-2;

		}




	}	

	k += solve(s,s.length());
	if(flag)
	printf("%lld\n",k);
	else
	cout<<'0'<<endl;
	cin>>s;
	
	flag = true;
	
	for(int i =0 ;i<=5000; i++)
	ans[i] = 0;

	}


}
