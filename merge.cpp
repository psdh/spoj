#include <iostream>

using namespace std;
int counter = 0;


int* add(int a[] , int b[] , int sa,int sb)
{
	int ans[sa+sb];
	int i , j , k;
	
	for( i =0,k=0,j=0;i<sa && j <sb;)
	{
		if(a[i] > b[j])
			ans[k++] = b[j++];
		else
			ans[k++] = a[i++];
	}

	while(i < sa)
	{
		ans[k] = a[i];
		i++;
		k++;
	}
	
	while(j < sb)
	ans[k++] = b[j++];
/*
cout<<"printing array now " <<endl;	
	for(int gh =0;gh<=sa + sb -1;gh++)
	cout<<ans[gh]<<"   ";

	cout<<endl;
*/
	
	return ans;
}

int* merge(int a[] , int size)
{

	if(size ==1)
	return a;
	
	int *p , *q ; 
/*	for(int i =0;i<size;i++)
	cout<<a[i]<<"  ";
	cout<<endl;
*/	p = merge(a, size/2);

/*	for(int i =0;i<size/2;i++)
	cout<<p[i]<<"   ";

	cout<<endl;
*/
	q = merge(a+size/2,size -size/2);
	
/*	 for(int i =0;i<size-size/2;i++)
        cout<<q[i]<<"   ";


        cout<<endl;

	*/

	a = add(p ,q , size/2 , size - size/2);

	for(int i =0;i<size ;i++)
	cout<<a[i]<<"    ";

	cout<<endl;

	return a;
	

}



int main(void)
{
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	cin>>a[i];
	

	cout<<"input loop done \n"<<endl;
	int *ans;
	
	ans=merge(a , n);

	for(int i =0;i<n;i++)
	cout<<ans[i]<<"   " ;
	cout<<endl;

	
}
