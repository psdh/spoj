#include <iostream>

using namespace std;
int k , l;

bool can_win(int n);



int main(void)
{
	int m;
	cin>>k>>l>>m;

	while(m--)
	{
	int n ;
	cin>>n;
	if(can_win(n) )
	cout<<"A";
	else 
	cout<<"B";	

	}
	cout<<endl;
}

bool a[1000001];
bool q[1000001];
bool can_win(int n)
{

	if(n==1 || n==k || n==l)
	return true;
	if(n==0)
	return false;
	//if(n>100000)
	//return (!can_win(n-1) || !can_win(n-k) || !can_win(n-l));
	//else
//	{
	if(q[n])
	return a[n];
	
	q[n]=true;
	return (a[n]= (!can_win(n-1) || !can_win(n-k) || !can_win(n-l)));
	//}
	

	
}
