#include <iostream>

using namespace std;

int main(void)
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{	
		cin>>n;
		int m,e=0,o=0;
		for(int i =0;n!=0;i++)
		{
			m = n%10;
			n = n/10;
			if(m%2 ==0)
				e++;
			else
				o++;
		}
		if( o>e)
			//if(o%2==0)
			//cout<<"even"<<endl;
			//else
			cout<<"odd"<<endl;
		else
		{
		//	if(e %2 ==0)
		//	cout<<"even"<<endl;
		//	else
			cout<<"even"<<endl;
		}
	}
}
