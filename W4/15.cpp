#include <iostream>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    for(int i=0; i<t ;i++)
    {
        cin>>x>>y;
        if(x>=y)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}