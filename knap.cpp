#include <iostream>

using namespace std;
/*
int value(int v[] , int w[] , int s , int n)
{
	if(s ==0 || n==0)
	return 0;
		
	if(w[n] > s)
	return value( v, w , s, n-1);
	else
	return max(v[n]+value(v,w,s-w[n],n-1), value(v,w,s,n-1));


}

*/


int value(int v[] , int w[] , int s , int n)
{
	int k[n+1][s+1];

	for(int i =0;i<=n ;i++)
	{
	for(int j =0;j<=s;j++)
	{
		if(i ==0 || j ==0)
		k[i][j] =0;
		else
		if(w[i-1] <= j)
		k[i][j] = max(v[i-1] + k[i-1][j-w[i-1]] , k[i-1][j]);
		else
		k[i][j] = k[i-1][j];

	}
	}


	return k[n][s];
}




int main(void)
{

	int n ;
	cin>>n;
	
	int val[n+1] , w[n+1];

	int s;

	cin>>s;
		
	for(int i =1 ; i<= n ;i++)
	cin>> w[i]>>val[i];

	w[0] = val[0]=0;	
	cout<<value(val,w,s,n);



}
