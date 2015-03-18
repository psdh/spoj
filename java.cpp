#include <iostream>
#include <ctype.h>


using namespace std;


string solve(string s , int n )
{
	int c =0 ,j=0;

	for(int i =0;i<n ;i++)
        {

		if(!(isalpha(s[i]) || s[i] =='_' || s[i] == '-'))
        	return "Error!";        
	
		if(s[i] == '_')
                {
			
                        if(j !=0  || !isalpha(s[i+1])|| i==0 || isupper(s[i+1]))
                        {
                       return "Error!";
                        break;
                        }
                        c++;

                        s.erase(i,1);
			n--;
	
			//cout<<s[i]<<endl;
			s[i] = s[i] -32;
			
                }
		else	
		if(isupper(s[i]) )
		{
			if(c !=0 || i==0)
			{
				return "Error!";
				break;
	
			}
			j++;
			string ans = "_";
			ans +=s[i]+32;
			s.replace(i,1,ans);
			n++;
		}



        }

	return s;



}


int main(void)
{


string s;

while(getline(cin,s))
{
	int n = s.length();
	

	/*
	
		if(s[i] == '_')
		{
			if(j ==0)
			{
			cout<<"Error!"<<endl;
			break;
			}
			c++;
			
			s.erase(i,i+1);
			s.replace(s[i].toupper());
		
		}
		


	}
	
*/


	cout<<solve(s,n)<<endl;


}
}
