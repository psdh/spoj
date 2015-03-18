nclude <iostream>
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
		
	
	
		int len = s.length();
		int a[len];
		
		
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
	
		cout<<solve(

		t++;
	}
	return 0;
}
