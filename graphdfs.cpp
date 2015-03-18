#include <iostream>
#include <string.h>
#include <set>

using namespace std;

int a[10010][10010] ; 
bool visited[10100]={false};
int no;


bool nextPath(int n)
{
	for(int i = 0;i<no;i++)
	{
		if( i==n)
		continue;
		if(a[n][i] == 1)
		{
		if(!visited[i])
		ret = nextPath(i);
		if(visited[i])
		return false;
		}
	}	
	return true;
}


int main(void)
{
	int e;
	cin>>no>>e;

	bool answer = true;
	
	memset(a,0,sizeof(a[0][0])*no*no);
    
	for(int i =0;i<e;i++)
	{
		int temp1, temp2;
		cin>>temp1>>temp2;
		
		if(temp1 == temp2)
		answer = false;
		
	}

	if(no != (e+1))
		answer = false;
	
	
	if(!answer)
	cout<<"NO"<<endl;
	{
		gotonextpath(0);
		
	}


}
