#include <iostream>

#include <vector>

using namespace std;

int main(void)
{
	vector <vector <int > > a ; 
	
	
	int t;
	
	cin>> t;

	vector<int> t1; 
	
	t1.push_back(t);

	a.push_back(t1);

	typeof(a)::iterator b = a.begin();
	
	cout<<*a;
	return 0;
}
