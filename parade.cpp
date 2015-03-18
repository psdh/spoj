#include <iostream>
#include <stack>

using namespace std;


bool check(int a[] , int n)
{
	int i , curr , back;

	stack<int> s;
	
	
	i=0;
	while(a[i] != 1 && i<n)
	{
		if(s.empty())
		{
			s.push(a[i++]);
			continue;
		}
		if(a[i] > s.top())
		return false;
		else
		s.push(a[i++]);
	}	
	if(a[i] !=1)
	return true;
	else
	{	
		i++;
		curr = 2;
		while(i < n-1)
		{	
			if(a[i] == curr)
			{
			curr++;
			i++;
			}
			else
			    if(s.empty())
				{
					s.push(a[i++]);
					continue;
				}
				else
				if(s.top() == curr)
				{
				s.pop();
				curr++;	
				}
				else
				if(a[i] > s.top())
                			return false;
                		else
                			s.push(a[i++]);		

		}

	}

}

int main(void)
{
	int t;
	cin>>t;

	while(t!=0)
	{

		int a[t];

		for(int i =0;i<t;i++)
		cin>>a[i];

		if(check(a,t))
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;

		cin>>t;

	}


}
