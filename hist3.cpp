#include <iostream>
#include <stack>

using namespace std;

long long int getMaxArea(long long int hist[] , int n)
{

	stack<int> s;
//	cout<<"reached123"<<endl;
	int i =0;
	int tp;
	long long int maxa = 0;
	
	while(i<n)
	{	
//		cout<<i<<endl;
		if(s.empty() || hist[s.top()] <= hist[i])
		s.push(i++);
		else
		{
				tp = s.top();
				s.pop();
				maxa  = max(maxa , hist[tp]*(s.empty()? i:i-s.top()-1));
		}
			
	}
//	cout<<"reached"<<endl;
	while(!s.empty())
	{
		tp = s.top();
		s.pop();
		maxa = max(maxa , hist[tp]*(s.empty()? i : i - s.top() -1));
	}
	
	return maxa;

}


int main(void)
{
int n ;
cin>>n;

while(n !=0)
{
	long long int a[n];
		
	for(int i =0;i<n;i++)
	cin>>a[i];
//	cout<<"reached"<<endl;
	cout<<getMaxArea(a,n)<<endl;
	cin>>n;
}


}
