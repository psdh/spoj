#include <iostream>
#include <stdlib.h>

using namespace std;


int main(void)
{


int a, b ;

cin>>a>>b;


while(a!= -1 && b!= -1)
{
	if(a ==0)
	cout<<b<<endl;
	else
	if(b == 0)
	cout<<a<<endl;
	if(a>b)
	{
		if(a%(1+b) ==0)
		cout<<a/(1+b)<<endl;
		else
		cout<<a/(1+b) +1 <<endl;
	}
	else
	{
		if(b%(1+a) ==0)
		cout<<b/(1+a)<<endl;
		else
		cout<<b/(a+1) +1<<endl;	
	}


	cin>>a>>b;

}



}



