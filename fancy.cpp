#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(void)
{	
	int t , t1=0;
	cin>>t; 
	while( t1 < t)
	{
		string s ;
		cin>> s;
	

		int b[30];
		
		int sum =1;
	
		int a[s.length()];
	
		int k=1;
		int j =0;
		b[0] =1;
		for(int i =1 ; i < s.length(); i++)	
		{
			
			if(s[i] == s[i-1])
			b[j]++;
			else
			{
				j++;
				b[j] = 1;
				k++;
			}
		
		}
	
		j =0;
	
		while(j < k )
		{
			
			sum *= pow(2, b[j]-1);
			j++;
		}
	
		cout<<sum<<endl;
		t1++;	
	}	
}
