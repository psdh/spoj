#include<iostream>
#include<math.h>


using namespace std;;

int main()
{
	int a , b , c;
	cin>>a>>b>>c;
	while(a != 0 || b != 0 || c!=0)
	{
		if((float)b == (float)(a+c)/2)
		cout<<"AP "<<c+(b-a)<<endl;
		else
		if(b == sqrt(a*c) || b == -(1)* sqrt(a*c) )
		cout<<"GP "<<(long)c*(long)b/a<<endl;
		
	
		
		cin>>a>>b>>c;
	}

}
