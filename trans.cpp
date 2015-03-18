#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int t1 , t=0;
	cin>>t1;
	
	while(t < t1)
	{
		
		string s ;
		cin>>s;
		
		/*
		0   operand 
		1   ( 
		2   ^
		3   /	
		4   *
		5   -
		6   +
		7   )

		*/
		
		stack < pair < char , int > > ans ;
	
		int len = s.length();
		int a[len];
		
		vector< vector<int> > buffer;
		vector<int>::iterator v  ;
		
		for(int i=0 ; i < len ; i++)
		{
			if(s[i] == '(')
			a[i] = 1;
			else 
			if(s[i] == '^')
                        a[i] = 2;
                        else
			 if(s[i] == '/')
                        a[i] = 3;
                        else
			 if(s[i] == '*')
                        a[i] = 4;
                        else
			 if(s[i] == '-')
                        a[i] = 5;
                        else	
			 if(s[i] == '+')
                        a[i] = 6;
                        else
			 if(s[i] == ')')
                        a[i] = 7;
			else 
			a[i] = 0 ;
                 }
	
		int bra = 0 ;

		for(int i =0 ; i < len ; i++)
		{
			if(a[i] == 1)
			{
			buffer.push_back(0);
			bra +=1;
			v= buffer.end() - 1 ; 
			}
			else
			if(a[i] == 0)
			ans.push(make_pair(s[i], 0));
			else 
			if( a[i] <= 6 && a[i] >= 2)
			{
					
				if((*v) == 0)
				ans.push(make_pair(s[i] , a[i]));
				else 
				{
					int temp = ans.top().second;
					if(temp > a[i])
					{
					pair<char, int> ss = ans.top();
					ans.pop();
					ans.push(make_pair(s[i] , a[i]));
					ans.push(ss);
					}
				}
			}
			else
			if(a[i] == 7)
			{
			buffer.erase(v);
			v = buffer.end() - 1;
			}
		}

		
		string an ;
		
		while(!ans.empty())
		{
			

			an += ans.top().first;
			ans.pop();


		}
		
		reverse(an.begin() , an.end());
		cout<<an<<endl;
		
		t++;
	}
}
