#include <iostream>
using namespace std;
unsigned long long int a[1000010],i,j;

int main(void)
{
	int t;
	cin>>t;
	int  k =4;
	while(t--)
	{

	int n ;
	cin>>n;

	a[0] =0;
	a[1] = 1;
	a[2] = 5;
	a[3] = 13;
	if(a[n] !=0)
	{
		cout<<a[n]<<endl;
		continue;
	}

	for(i=k;i<=n;i++)
	{
			 j = (i+1)/2;
		a[i]  = a[i-1]+ (long long ) 2*i -1 + (long long )(i-1)*i/2;
		if(i%2==0)
		a[i] += ((i+1)/2 -1);
					
		a[i]+=(j-2)*(j-1);
			
	}
	cout<<a[n]<<endl;
	k=n;

}
}
