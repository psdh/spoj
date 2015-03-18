#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    setprecision(2);
 //   cout<<fixed;

    double bal;
    int wit;

    cin>>wit>>bal;

    if((double)wit > bal-1)
        cout<<bal<<endl;
        else
            if(wit %5 !=0)
                cout<<bal<<endl;
                else
                    cout<<setprecision(2)<<fixed<<bal-0.50-(double)wit<<endl;
        
}
