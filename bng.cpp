#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    string s;
    cin>>s;
    
    set<int> se;

    int n =s.length();
    int i ,k;

    for( i =0;i<n;i++)
    {
        k = s[i] - '0';
        
        se.insert(k);
    }

    if(se.size() % 2 !=0)
    cout<<"IGNORE HIM!"<<endl;
    else
        cout<<"CHAT WITH HER!"<<endl;
}
