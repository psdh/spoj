#include <iostream>
//#include <conio>

using namespace std;
char c;
void prit(int n)
{	
	
	if(n > 5)
	{
		cout<<n-1<<"\t\t\t"<<n-2<<"\t\t\t"<<n-3<<endl;
		cin>>c;
		prit(n-1);
		cin>>c;
		prit(n-2);
		cin>>c;
		prit(n-3);
		cin>>c;
	}


}


int main(void)
{
	int n ;
	cin>> n ;

	prit(n);

}
