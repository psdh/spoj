#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int t;
	cin>>t;
	int t1 =0;
	while(t1 < t )
	{
		int m , n;
		
		cin>>m>>n;
		
		vector<int> h;
		int temp;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
		//	cout<<temp<<endl;
			h.push_back(temp);
		}
		bool flag = false;
		int sum =0;
		sort(h.begin(), h.end());
		int ans =1;
		for(int i =n-1 ;i>=0;i--)
		{
		//	cout<<h[i]<<endl;
			sum += h[i];
			if(sum >= m)
			{
				flag=true;
				break;
			}else	
				ans++;
		
		}
		
		cout<<"Scenario #"<<t1+1<<":"<<endl;
		if(flag)
		cout<<ans<<endl;
		else
		cout<<"impossible"<<endl;
		
		
		
		
		t1++;
		
	
	
	}


}
