#include <iostream>
#include <stdio.h>
using namespace std;


//int a[100000];
//bool a1[100000] = {false};



int min(int n)
{
	int k ;
	int k1 , k2 , k3;
	if(n == 1)
	return 1;
	else
	if(n == 0 )
	return 0;
	else
	{
		if( (k=min(n/2) + min(n/3)  + min(n/4))  <  n)
		ret= n ;
		else
		ret k ;
			
	if(n < 100000)
	
	
	
	}
}

int main(void)
{
	int n ;
        while(scanf("%d" , &n) != 0)
        {
		cout<<min(n)<<endl;

        }
}
                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                    
