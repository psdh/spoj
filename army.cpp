#include <iostream>

using namespace std;

int main(void)
{
	int t;

	cin>>t;

	while(t--)
	{
		int m , n ;
		cin>>m>>n;
	
		int maxmeta =0, maxgod =0, temp=0;

		for(int i =0 ;i<m;i++)
		{
		cin>>temp;
		if(temp> maxgod)
		maxgod = temp;
		}
		
		temp = 0;
		
		
		for(int i =0 ;i<n;i++)
		{
		cin>>temp;
		if(temp> maxmeta)
		maxmeta = temp;
		}

		
		if(maxmeta > maxgod)
		cout<<"MechaGodzilla"<<endl;
		else
		cout<<"Godzilla"<<endl;

		
	}


}
