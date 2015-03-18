#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
	int k;
	cin>>k;
	string s;
	cin>>s;

	int a[8] ={0};

	for(int i =0;i<=37;i++)
	{
		if(s.substr(i,3).compare("TTT") ==0)
			a[0]++;
		else
		if(s.substr(i,3).compare("TTH") ==0)
			a[1]++;
		else						
		if(s.substr(i,3).compare("THT") ==0)
			a[2]++;
		else				
		if(s.substr(i,3).compare("THH") ==0)
			a[3]++;
		else			
	        if(s.substr(i,3).compare("HTT") ==0)
			a[4]++;
		else	
	        if(s.substr(i,3).compare("HTH") ==0)
			a[5]++;
		else
		if(s.substr(i,3).compare("HHT") ==0)
			a[6]++;
		else
		if(s.substr(i,3).compare("HHH") ==0)
			a[7]++;

	}

	cout<<k<<" ";
	for(int i =0;i<8;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
	
}
 
}
