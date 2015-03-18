#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main()
{

int m , n ;
cin >>m>>n;


	while(!(m == 0 && n ==0))
	{
		int las=99999999;

		int temp;
	////////	vector<int> v;
	
		for(int i=0;i<m;i++)
		{
			cin>>temp;
			if(temp< las)
			las = temp;
		}
	
		int smal , smaller;
		
		cin>>smal;
		cin>>temp;
		
		if(temp < smal)
		smaller = temp;
		else
		{	
		smaller = smal ;
		smal = temp;
		}
		for(int  i =2;i<n;i++)
		{
			cin>>temp;
			
			if(temp <= smaller)
			{
			smal = smaller;
			smaller = temp;
			}
			else
			if(temp <smal)
			smal = temp;
			
		
		}
		
//		sort(v.begin() , v.end());
	
		if(las < smal)
		cout<<"Y"<<endl;	
		else
		cout<<"N"<<endl;
	
	cin>>m>>n;		
		
		
	}
}
