#include <iostream>
#include <string.h>
#include <set>

using namespace std;

int a[10010][10010] ; 
set<int> visited; 
int no;

bool checkPath(int s, int e)
{
	bool ret = false;
	
	for(int i =0;i<no;i++)
	{
		if(ret)
		return true;
		
		if(i == s)
		continue;
		if(i ==e)
		continue;
	///	cout<<1<<endl;	
		if(i == e && a[s][e] == 1)
		return true;
		
		if(visited.count(i) !=0)
		continue;
		else
		{
			if(a[s][i]==1)
			{
			visited.insert(i);
			ret = checkPath(i,e);
			
			if(ret)	
			return true;
			else
			visited.erase(i);       ////may not be required :)
			}
		}
	}
	
	return ret;
	
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
		
		a[temp1-1][temp2-1] = 1;
		a[temp2 -1][temp1 -1] =1;
	}

	if(no != (e+1))
		answer = false;
	
	
	if(!answer)
	cout<<"NO"<<endl;
	else
	{
		bool ret = false;
		visited.clear();
		
		for(int i = 0;i<no;i++)
		{
			visited.clear();
			visited.insert(i);
			if(ret)
			{
				break;
			}
			for(int k =0;k<no;k++)
			{
				if(i ==k)
				continue;
				if(a[i][k] ==1)
				{
					if(checkPath(k,i))
					{
						
						ret = true;
						break;
						
					}
		
				}
			}
					
	
	
		}
		if(ret)
		cout<<"NO"<<endl;	
		else
		cout<<"YES"<<endl;
		
	}
			

}
