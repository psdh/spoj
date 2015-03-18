#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int t ;

	cin>> t;
	
	while(t--)
	{
		int a ;
		long long b ; 
		cin>>a>>b; 
	
	/*
		int p[10];
		int k;
		p[0] = a%10;
		int i =1 ; 
		bool flag = true;		
		while(flag)
		{	
		
			p[i] = (long long )pow(a, i+1)%10;
		
			for( int j =1 ; j < i ; j++)
			{
				if(p[j] == p[0])
				{
					k=i;
				
					flag = false;
				
					break;
				
				}
			
			}

		
			if(flag)
			i++;
        	}

		cout<<k<<endl;*/
		int p[] = {2, 2 , 5 , 5, 3, 2, 2, 5 ,5 , 3 ,2, 2, 5 , 5, 3 ,2, 2 , 5, 5, 3, 2};
		int k= p[a] -1;	
		int gh= b%k ; 
	
		/*if(gh == 0) 	
		gh = k-1;
		else
		gh--;*/

		
		
		if(b == 0 )
		cout<<"1"<<endl;
		else
		cout<<(long long)pow(a,gh)%10<<endl;
		
	}

}
