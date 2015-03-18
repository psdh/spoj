#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>


using namespace std;

int main(void)
{

	int t;
	cin>>t;
	
	while(t--)
	{
		vector<pair <int , int> > price;

		int x , y;

		cin>>x>>y;
		int temp ;

		for(int i =0;i<x-1;i++)
		{
			cin>>temp;
			price.push_back(make_pair(temp,i));
		
		}

		for(int i =0;i<y-1;i++)
		{
		cin>>temp;
		price.push_back(make_pair(temp,x-1+i));
		
		}
	
		sort(price.begin() , price.end());


		int ver=1 , hor =1;
		long long int sum =0;

		for(int i = x+y-3 ; i >=0  ; i--)
		{
			
			
			
			if(price[i].second <x-1)
			{	
				sum+= price[i].first * ver;
				hor++;
			}
			else	
			{
				sum+=price[i].first * hor;
				ver++;
			}						
		}
		printf("%lld\n",sum);

	}



}


