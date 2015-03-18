#include <iostream>
using namespace std;


int main()
{
int t;
cin>>t;
int a[t][t];
long long int sum =0;


	for(int i =0;i<t;i++)
		for(int j =0;j<t;j++)
		{
			cin>>a[i][j];
			sum += a[i][j];
		}

	int gh = 2*t -2;
	sum = sum/gh;

	long long int y;
//	cout<<sum<<endl;
	long long int temp=0;
	
	for(int i =0;i<t;i++)
	temp+=a[0][i];

	temp = temp -sum;

	if(t ==2)
	y = 1;
	else
	y = temp/(t-2);
	
	cout<<y<<" ";

	for(int i =1;i<t;i++)
	cout<<a[0][i]-y<<" ";
	cout<<endl;

}
