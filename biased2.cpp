#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <vector>


using namespace std;

int main(void)
{
int t;

cin>>t;

	while(t--)
	{
		string s;
		long long int n;							//size of test case 
		scanf("%lld" , &n);						
		long long int i=0;							//iterator
		vector<long long int> teams;				// vector for the preferred ranks
		long long int k;							//temp variable 									
		for( ; i<n ;i++)
		{	
			cin>>s>>k;
			teams.push_back(k);
			
	
		}
	
		sort(teams.begin(), teams.end());					
		long long int sum =0;
		
		for(i=0;i<n;i++)									// loop that traverses over n and finds out the absolute difference in the ith preferred rank and i+1
		sum += abs(teams[i] - i - 1);
		
		cout<<sum<<endl;
	
	}


}
