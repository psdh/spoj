#include <iostream>

using namespace std;

int main(void)
{
	int t;
	cin>>t;
		
	while(t--)
	{
		long long int n,k,ti,f;
		
		cin>>n>>k>>ti>>f;
			
		long long int ans =( f - n) / (k-1);
	///	cout<<ans<<endl;		
	ans = (long) ans * k;
			ans = ans +n;		
				cout<<ans<<endl;
	
	}
}
