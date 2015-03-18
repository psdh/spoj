#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string.h>

using namespace std;

int sumSq(long long int n)
{

int temp = 0;

int ret = 0;
for(int i =0;n!=0;i++)
{
	temp= n%10;
	n = n/10;
	ret+=temp*temp;
}

return ret ;
}

int main(void)
{

bool check[1001];
for(int i=0;i<1001;i++)
check[i] = true;

long long int n ;

cin>>n;

int c =0;
while(true)
{
//	cout<<n<<endl;
	 n = sumSq(n);
//	cout<<n<<endl;
	c++;
	if(n == 1)
	{
		printf("%d\n",c);
		break;
	}
	else
	if(!check[n])
	{
//	cout<<check[n]<<endl;
	printf("-1\n");
	break;	
	}
	else
	check[n] = false;	
}

	
}
