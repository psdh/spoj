#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;


int main(void)
{
	int t;
	cin>>t;
	
	int t1=0;
	while(t1 < t)
	{
		long long int  ans; 

		
		long long int r;
		cin>>r;

		ans = 4*r*r;
		//cout<<"Case "<<t1+1<<": "<<ans<<".25"<<endl;

		cout<<"Case "<<t1+1<<": "<<ans<<".25"<<endl;
		 
		t1++;
	}

}
