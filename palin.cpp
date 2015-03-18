#include <iostream>
#include <string>


using namespace std;


bool checkPalindrome(long a)
{
        long t=a;
        long sum=0;
	
        while(a)
        {
               sum= sum*10+ a%10;
               a=a/10;
        }

                if(sum==t)
                return true;
                else
                return false;
}



int main()
{
	int i =0 ; 
	int test;
	cin>>test;
	while(i < test)
	{

		long a;
		cin>>a;
		while(true)
		{
			a++;	
			if(checkPalindrome(a))
			{
				cout<<a;
				break;
			}
		}
			
		i++;
	}
	
	
}
