#include <iostream>

using namespace std;

int main(void)
{
	int t , t1=0; 
	cin>>t;
	while(t1 < t)
	{
		int n;
		cin>>n;
		int k= (n*(n+1)*(2*n +1) / 6);
		cout<<k<<endl;
		
		t1++;
	}
}

