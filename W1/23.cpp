#include <iostream>
using namespace std;

int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        string input, output;
        cin>>n>>input>>output;
        // cin>>input[i];
        // for(int j=0; j<n; j++)
        //     cin>>output[j];
        int count=0;
        for(int k=0; k<n;k++)
        {
            if(input[k]!=output[k])
                count++;
        }
        if(count%2==0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
                
    }

}