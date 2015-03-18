#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	while( n !=0)
	{
		int a[n];
		int t[n];
		for(int i=0;i<n;i++)	
		t[i] = 0;
		
		for(int i =0;i<n;i++)
		{
		
		cin>>a[i];
		t[a[i]- 1] = i+1;
		}
		bool flag = false;
	
		for(int i =0;i<n;i++)
		{
	//		cout<<t[i]<<endl;
			if(a[i] !=t[i])
			{
				flag = true;
				break;
			}
		}

		if(flag)
		cout<<"not ambiguous"<<endl;
		else
		cout<<"ambiguous"<<endl;
			
	
	
	
		cin>>n;
	}



}
