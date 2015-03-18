#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<pair<long long , long long >> s;

	long long t;

	scanf("%lld" , &t);
	long long i =0 ;
	
	long long temp;
	
	while(i<t)
	{
		scanf("%lld",&temp);
		s.insert(make_pair(temp, i));
	}	


	

}

