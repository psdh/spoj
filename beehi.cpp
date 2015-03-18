#include<iostream>

using namespace std;

int main(void)
{
	long long int t;
	cin>>t;
	bool b;
	while(t != -1)
	{
	b  = false;
	if(t ==1)
	{
	cout<<"Y"<<endl;
	cin>>t;
	continue;
	}
	t = t-1;
	for(long long int i=1;t >=0 ;i++)
	{
		if(t ==0)
		{
		b = true;
		break;	
		}
	t = t-6*i;
	}
	if(b)
	cout<<"Y"<<endl;
	else
	cout<<"N"<<endl;
	cin>>t;
	}

}
