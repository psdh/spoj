#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n];
      int temp;
        long long int sum =0;

        for(int i =0;i<n;i++)
        {
                cin>>a[i];
                sum+=a[i];
        }
        long long int ans=0;
        
        int k =n;

        int en = --n;
        for(int it = 0;it !=en;it++)
        {
            sum -= a[it];
            ans += sum - (--k)* (a[it]);
        }
        
        cout<<ans<<endl;

    }

}
