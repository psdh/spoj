#include <iostream>

using namespace std;

int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		long long int ans = 3*n*n + n;
		ans = ans /2;

		ans = ans%1000007;

		cout<<ans<<endl;
	}
}
