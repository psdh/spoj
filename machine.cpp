#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
int t;
cin>>t;

//long long int a[t];
long long int res = 0;

vector<int> a;

long long int temp;
for(int i =0;i<t;i++)
{
cin>>temp;
a.push_back(temp);
}

sort(a.begin(),a.end());


for (int i =0;i<t;i++)
{
res = a[i];

 for(int j=0;j<i;j++)
 {
	if(a[j] < a[i])
	res--;
 }
cout<<res<<" ";
}

cout<<endl;
}
