#include <iostream>
using namespace std;

int main() 
{
	int k ;
	cin>>k;
	
	while(k!=0)
	{
		
		string s;
		cin>>s;
		int n;
		//cout<<s<<endl;
		n = s.length()/k;
		//cout<<n<<endl;
		char c[n][k];
		
		int h=0;
		
		for(int i =0 ; i< n ; i++)
		{
			if(i %2 !=0)
			for(int j=k - 1 ; j >=0 ; j--)
			{
				c[i][j] = s[h]; 
				h++;
			}
			else
			for(int j =0 ; j<k; j++)
			{
						c[i][j] = s[h];
						h++;	
			}
		}
		
		for(int i=0 ; i<k ; i++)
		{
			for(int j =0 ; j<n  ; j++)
			cout<<c[j][i];
		}
		cout<<endl;
		
		cin>>k;
	}
	
	
	return 0;
}
