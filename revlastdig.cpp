#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int t ;

	cin>> t;
	
	while(t--)
	{
		string aa ;
		long long b ; 
		cin>>aa>>b;

		int a;

		a = aa[aa.length() -1] -48; 
	
		int p[] = {2, 2 , 5 , 5, 3, 2, 2, 5 ,5 , 3 ,2, 2, 5 , 5, 3 ,2, 2 , 5, 5, 3, 2};
		int k= p[a] -1;	
		int gh= b%k ; 
	
		if(gh ==0)
		gh =k;
		
		
		if(b == 0 )
		cout<<"1"<<endl;
		else
		cout<<(long long)pow(a,gh)%10<<endl;
		
	}

}
