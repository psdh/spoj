#include <iostream>

using namespace std;

int main(void)
{
	
	int n ;
	cin>>n;
	int a[n];

	
	for( int i =0;i<n;i++)
	cin>>a[i];
	


	int k ;
	int max =0;
	int maxpos;
	cin>>k;
	int ans[n-k+1];
	int gh =0;
	for(int j =0;j<k;j++)
	if(a[j] > max)
	{
		max = a[j];
		maxpos = j;
	}
		//cout<<max;
		ans[gh++]=max;
	for(int i =1;i<n-k+1;i++)
	{
		if(maxpos >=i)
		{	
			if(a[i+k -1] > max)
			{
			max = a[i+k-1];
			maxpos= i+k-1;
			ans[gh++] = max;
			//cout<<max;
			}
			else
			    ans[gh++] = max;
	//cout<<max;
		}
		else
		{
			max =0;
			
			for(int j=i;j<i+k;j++)
			{
				if(a[j] > max)
        			{
                		max = a[j];
                		maxpos = j;
       				 }
			        
			}
			    ans[gh++] = max;
//cout<<max;	
	}
	}

	for(gh =0;gh < n-k ; gh++)
	cout<<ans[gh]<<" ";
	cout<<ans[gh];
cout<<endl;

}
