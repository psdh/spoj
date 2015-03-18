#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float q = 1e-3;
int main(void)
{
	float k ;	
	cin>>k;
	setprecision(2);
	while(fabs(k -0.0) > q)
	{
		int n =1;

		float sum =0;
	
		while(true)
		{
			sum += (float)1/(n+1);
			if((sum- k) > 1e-7)
			break;
			else
			n++;	
		}
	
		cout<<n<<" card(s)"<<endl;
	
		cin>>k;
	}



}
