#include <iostream>

using namespace std;

int main(void)
{

	int  t;

	cin>>t;

	while(t--)
	{
		string s;
		cin>>s;

		string t =s;
		
		bool flag=true; 
		int n = s.length();	
		
		if(n ==1)
		{
		cout<<s<<endl;
		continue;
		}	
	
		for(int i=0;i<=n/2;i++)
		if(s[i]!= s[n-i-1])
		{
			flag = false;
			break;	
		}
	//	cout<<flag<<endl;
		bool check = false;
		if(!flag)
		{
			for(int i =0 ; i<=n/2 ; i++)
			s[n-i-1] = s[i];
			
			for(int j = n/2 ; j < n ; j++)
			if(s[j] > t[j])
			{
				check = true;
				break;
			}
	
			if(!check)
			{
				 if(n%2 ==0)
                        	{
                               		 s[n/2]++;
                               		 s[n/2 -1]++;
                       		 }
                       	 	else
                       	 	s[n/2]++;

			}	
			
			cout<<s<<endl;

		}
		else	
		{
			if(n%2 ==0)
			{
				s[n/2]++;
				s[n/2 -1]++;
			}
			else
			s[n/2]++;
			cout<<s<<endl;
		}

	}



}
