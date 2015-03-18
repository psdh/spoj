#include <iostream>

using namespace std;

int main(void)
{
int t;
cin>>t;


while(t--)
{
int n;
cin>>n;

int a[n];
int counter =0;

for(int i =0;i<n;i++)
cin>>a[i];

int temp,j;

for(int i =1;i<n;i++)
{
	int temp= a[i];

	j =i-1;
	while(temp <a[j] && j >= 0)
	{
		counter++;
		a[j+1]=a[j];
		
		j--;
	
	}
	a[j+1] = temp;

/*	for(int gh =0;gh<2;gh++)
	cout<<a[gh]<<"   ";
	cout<<endl;
*/
}
cout<<counter<<endl;
/*for(int i =0;i<n;i++)
cout<<a[i]<<"   ";

*/



}
}
