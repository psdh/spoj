#include <iostream>

using namespace std;

int main(void)
{
int k;
cin>>k;
while(k != -1)
{
	int a[k];
	int sum=0;
	for( int i = 0 ; i< k ; i++)
	{
		cin>>a[i];
		sum+=a[i];
	}


	if(sum % k != 0)
	cout<<-1<<endl;
	else
	{
		int p = sum/k;
		int sumu= 0;
		for( int i =0 ; i< k ; i++)
		{
			if(a[i] > p)
			sumu=+ a[i]-p;
		}
		cout<<sumu<<endl;
	}
	cin>>k;
}
return 0;
}
