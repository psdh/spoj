#include <iostream>
#include <vector>
using namespace std;
bool done[10100]={false};
int don[10100] = {0};
vector < pair< int,int > > w;
int s = 0;


int findMin(int n)
{
	
	if(done[n])
	return don[n];
	
	 
int	ret = findMin(n-w[0].first);
	for(int i =1;i<s;i++)	
	{
		if(n>w[i].second)
		ret = min(ret,findMin(n-w[i].first));
		cout<<ret<<endl;
	}
	

	done[n] = true;
	don[n] = ret;
	return ret;	
}




int main(void)
{
	int e,f;
	int imp ;	

	cin>>e>>f;
	imp = f-e;

	cin>>s;
	
	for(int i=0;i<s;i++)
	{
	int temp1, temp2;
	cin>>temp1;
	cin>>temp2;
	w.push_back(make_pair(temp1,temp2));
	}
	cout<<findMin(imp)<<endl;
}
