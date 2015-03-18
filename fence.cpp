#include <iostream>
#include <math.h>
#include <iomanip>
#define _USE_MATH_DEFINES
 
using namespace std;

int main(void)
{

	int t;
	cin>>t;

	while(t!=0)
	{
		double area=0;

		area = (float)t*t/(2*M_PI);
		setprecision(2);
		area=area*100;
		area = round(area);
	//	cout<<area;	
		cout<<fixed;
			area = area/100;
	
		cout<<setprecision(2)<<area<<endl;
		cin>>t;
	}


}
