#include <iostream>
using namespace std;

int main() 
{
	int t,a,b,c,d;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        int A=0, C=0, sum=0;
	    cin>>a>>b>>c>>d;
        if(a>=b)
            A=a;
        else
            A=b;
        if(c>=d)
            C=c;
        else
            C=d;
        sum = A+C;
        cout<<sum<<endl;
	    
	}
	return 0;
}
