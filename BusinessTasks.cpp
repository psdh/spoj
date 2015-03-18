#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
//#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
//#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;



string getTask(vector <string> list, int n) 
	{
		vector<string>::iterator t = list.begin();
		
				
		while(list.size() != 1)
		{
			for(int i =1 ; i < n ;i++)
			{
				if(t  == list.end())
					t = list.begin();
				else
					t++;
			}
				if((t+1) == list.end())
				{
					cout<<*t<<endl;
					list.erase(t);
					t=list.begin();
				}
				else
					{
				//		cout<<*t<<endl;
						list.erase(t);
						
					}
		
//		cout<<*t<<endl;
	}

		return *t;
		
		
	}


int main(void)
{
	vector<string> list;
	list.push_back("a");
	 list.push_back("b");
	 list.push_back("c");
	 list.push_back("d");

	int n =2;

	cout<<getTask(list , n)<<endl;
	return 0;
}

