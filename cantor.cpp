#include <iostream>


using namespace std;

int main(void)
{

 int t;
cin>>t;
int t1 =0;


while(t1 < t)
{
	int n ;	
	cin>>n;



	int i =1;

	if(n ==1)
	{
	cout<<"TERM "<<n<<" IS "<<"1/1"<<endl;

	continue;
	}

	int num=1;
	int den=1;
	int k;
	while(true)
	{
		k =n -  (i*(i+1)/2);
//		cout<<k<<endl;
		if(k  <=( i+1))
		{
				
	
			if(i %2 !=0)
			{
			num = 1;
			den  = 1+i;
			k--;
			while(k--)
			{
				num++;
				den--;
			
			}
			}
			else
			{
			 num = 1+i;
                        den  = 1;
                        k--;
                        while(k--)
                        {
                                num--;
                                den++;

                        }
			}
			break;
		}
		
		
		//cout<<i<<endl<<k<<endl;
			i++;	
	}
	 cout<<"TERM "<<n<<" IS "<<num<<"/"<<den<<endl;



	t1++;
}





}
