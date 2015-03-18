#include <iostream>

using namespace std;

long long int solve(int *a , int n)
{
	if(n ==0)
	return 0;
	if(n==1)
	return *a;
	
	int *p;
	long long int i,small = a[0];
	int smallpos = 0;
	
	for(i =1;i<n;i++)
		if(a[i] < small)
		{
			small = a[i];
			smallpos= i;
		}	

	i = smallpos;

	return max(solve(a,i),max(solve(a+i+1,n-i-1),(long long int)n*small));


}


int main(void)
{
int n ;
cin>>n;

while(n !=0)
{

int a[n];

for(int i =0;i<n;i++)
cin>>a[i];

cout<<solve(a,n)<<endl;;
cin>>n;
}
}
