#include <iostream>
using namespace std;
int main()
{
	int t , t1=0;
	cin>>t;
	while(t1 < t)
	{
		int x , y ;
		cin>>x>>y;
		
		if(x ==y)
		{
			if(x %2 == 0)
			cout<<2*x<<endl;
			else
			cout<<2*x -1<<endl;
		}
		else 
		if(x-y == 2)
		{
			if(x % 2 == 0 )
			cout<<2*x -2<<endl;
			else
			cout<<2*x - 3<<endl;
		}
		else
		cout<<"No Number"<<endl;
		
		t1++;
	}
}
