#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(void)
{
	string s;
	string tot="";
	int j=0,i =0;
	int n;
	cin>>n;
	int code[n];
	
	for(i=0;i<n;i++)
	cin>>code[i];
	i=0;

	int a[100];
	
	while(true)
	{
		cin>>s;
	
		if(s == "-1")
		break ;
		else
		tot+=s;
		i+=s.length();
                a[j++]=i;
	}
	int k =0;
	int z = tot.size();
	for(i =0 ; k<z ;i++,k++)
	{
		//cout<<tot[i];
		if(i==n)
		i=0;
		tot[k] = 97 + ( tot[k] -97 +code[i]) % 26;
		
	}
//	cout<<endl;
	
	i=0;

	j=0;
//	cout<<z<<endl;	
	while(i < z)
	{
		if(i == a[j])
		{
			cout<<endl;
			a[j]=0;
			j++;
		}
		else
		{
		cout<<tot[i];
		i++;
		}
	
	
	}
	cout<<endl;

}
