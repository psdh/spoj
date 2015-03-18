#include <iostream>

using namespace std;

int main(void)
{

string s;
cin>>s;


	while(true)
	{
	if(s[0] == '0')
		if(s.length() ==1)
			break;
		else
		{
			cout<<0<<endl;
		
			cin>>s;
			continue;	
		}
	
	int n = s.length();
	bool flag = true;
	
	for(int i =1;i<n;i++)
	{
		
		if(s[i] =='0')
		{
			int a = s[i-1] - 48;
				
			if(a < 3)
			s.erase(i-1,i+1);
			else
			{
				flag = false;
				break;	
			}
			i-=2;
			n = n-2;

		}




	}
	
	
	
	if(!flag)
	{
	cout<<'0'<<endl;
	cin>>s;
	continue;
	}
	
	
	
	
	
	
	
	
	 n = s.length();
	
	
	
	
	

	if(n<2)
	{
	cout<<1<<endl;

	cin>>s;
		continue;
	}
long long int ways[5010];
int one[5010];
int two[5010];

for(int i =0;i<n;i++)
one[i] = s[i] -48;


for(int i =1;i<n;i++)
two[i] = 10*one[i-1] + one[i];

ways[0] =1;

if(one[1])
ways[1] = 1;
else
ways[1]=0;
if(two[1] >9 && two[1] < 27)
ways[1]++;


for(int i =2;i<n;i++)
{	
	if(one[1])
	ways[i] =ways[i-1];
	else
	{
	ways[i] = 0;
	ways[i-1]=ways[i-2]=0;
	}
	if(two[i]>9 && two[i] <27)
	ways[i]+=ways[i-2];

}

cout<<ways[n-1]<<endl;

cin>>s;
}
}
