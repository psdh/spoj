#include <iostream>
#include <stack>

using namespace std;

int main(void)
{

	int n;
	cin>>n;
	while(n !=0)
	{
		long long a[n];

		stack<long long> s,q;

		for( int i =0 ;i < n ;i++)
		{
			cin>>a[i];
			s.push(a[i]);
		}

		q=s;
		
		int ma=0;			
		int k ;
		for(int i=n-1; i>=0 ;i--)
		{
			k=0;
			while(!s.empty() && a[i] <=s.top())
			{	
			s.pop();
			k++; 
			}
		
			
			q.pop();
			s=q;

			for(int j=i+1;j<n;j++)
			if(a[j] >= a[i])
			k++;
			else
			break;

			if(ma < k*a[i])
			ma= k*a[i];
		
			
		}
				

		cout<<ma<<endl;	
		
		cin>>n;
	}

}	
