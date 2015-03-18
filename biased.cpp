#include <iostream>
#include <vector>
#include <string>

#include <algorithm>
#include <stdlib.h>

#include <math.h>


using namespace std;


int main(void)
{

vector <pair<long long int , string > > teams;


int t ;
cin>>t;

while(t--)
{
	int n ;

	cin>>n;
	long long int sum =0;
	int i =0;

	int q;
	long long int tem;
	 string temp;
	for( ;i<n;i++)
	{
	cin>>temp>>tem;

	teams.push_back(make_pair(tem,temp));
	}

	sort(teams.begin() , teams.end());
	
//	cout<<teams.size();
	for( int p = 0; p < n; p++)
	{
		
		q = teams[p].first - (p+1);
			
//		cout<<q<<endl;

		sum+=abs(q);

		
		
	}

	cout<<sum<<endl;


}


}
