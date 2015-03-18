#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm> // binsearch,max(a,b),min(a,b)
#include <math.h>
#include <queue>

#include <vector>
#include <set>
#include <list>
#include <map>
#include <string.h> // memset
#include <cstdlib> // abs(int),labs(int),llabs(int),min,max
#include <limits.h> // int_max,int_min,long_long_max,long_long_min



using namespace std;

map<long long , long long> m;


long long solve(long long n )
{
	long long ret;
	
	if(n == 0)
	return 0;
	if(m.count(n))
	return m[n];
	
	ret = solve(n/2) + solve (n/3) + solve(n/4);
	ret = (ret > n)? ret:n;
	m[n] = ret;
	return ret;	

	

		
	

}



int main(void)
{
	long long n ;
	while(cin>>n)
	cout<<solve(n)<<endl;
}
