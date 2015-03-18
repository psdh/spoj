#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n ;
		cin>>n;
		vector<int> a(n) , b(n);

		int i=0;
		while(i<n)
		{
			cin>>a[i];
		i++;
		}
		i=0;
		
		while(i<n)
		{
		cin>>b[i];
		i++;
		}

	
		sort(a.begin() , a.end());
		sort(b.begin() , b.end());

		long long sum = 0;
		for(i =0 ;i< n; i++)
		sum+= a[i]*b[i];
		
		cout<<sum<<endl;
	}
}
