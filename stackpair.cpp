#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	stack < pair< string , int > > one ;

	one.push(make_pair("Ehello " , 12));
	
	cout<<one.top().first<<endl;
	return 0 ;
}
