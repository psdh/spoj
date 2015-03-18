#include <iostream>

using namespace std;

int solve(int a , int b)
{

	if(a==0)
	return b;
	else
	if( b ==0)
	return a;	
	else
	if(a>b)
	return min(solve(a-1,b-1) ,1+solve(a-1,b));

}


int main(void)
{


int a,b;

cin>>a>>b;

while(a!= -1 && b!= -1)
{

cout<<solve(a,b)<<endl;
cin>>a>>b;

}



}
