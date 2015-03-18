#include <iostream>
#include <string>
#include <queue>

using namespace std;


char operato[5] = { '+','-' , '*' , '/' ,'^' };

string solve(string s, int a[])
{
	priority_queue<int> op ;
	string ans;
	int j=0;
	int k = s.length();
	for(int i =1 ;i < k ; i++)
	{
		if (a[i] == 1)
		{
			int opened , closed ;
			opened = closed = 0 ;
			int *b = a+ (i);
			opened++;
			for(j = i+1 ; j< k ; j++)
			{
				if(a[j] ==1 )
				opened++;
				else
				if(a[j] == 8)
				{
					closed++;
					if(opened == closed)		
						break;
				}


			}
			ans+= solve(s.substr(i,j-i+1), b);
		//	cout<<ans<<endl;
			i=j;
	//	cout<<i<<endl;
		continue;
		}

		if(a[i] >= 2 && a[i] <= 6)
			op.push(a[i]);

		if(a[i] == 0)
			ans+=s[i];
		
		if(a[i] == 8)
		{
			while(!op.empty())
                        {
				ans+= operato[op.top() -2];
				op.pop();
			
			}
			return ans;
		}
	}
	
}


int main()
{
	int t, t1 =0; 
	cin>>t;
	
	while( t1 < t)
	{
		

		string s ;
		cin>> s;
	
		int opnb[s.length()];
	
		for(int i = 0; i< s.length(); i++)
		{
			if(s[i] == '(')
			opnb[i] = 1;
			else
			 if(s[i] == '^')
                        opnb[i] = 6;
			else
			 if(s[i] == '/')
                        opnb[i] = 5;
			else
			 if(s[i] == '*')
                        opnb[i] = 4;
			else
			 if(s[i] == '-')
                        opnb[i] = 4;
			else
			 if(s[i] == '+')
                        opnb[i] = 2;
			else
			if(s[i] == ')')
			opnb[i] = 8;
			else
			opnb[i] = 0;
		}
		
		string ans =solve(s,opnb);
		cout <<ans<<endl;
	
	
	
	t1++;	
	}
	
	
}
