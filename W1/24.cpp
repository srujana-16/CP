
#include <iostream>
using namespace std;

int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        string input;
        cin>>n;
        cin>>input;
        int count=0;
        for(int i=0; i<n;i++)
        {
            if(input[i]!='a' && input[i]!='e' && input[i]!='o' && input[i]!='u' && input[i]!='i')
            {
                count++; //count increases if a consonant occurs 
            }
            else
            {
                count=0; //set count back to 0 if a vowel occurs
            }
            if(count>=4)
            {
                break;
            }
        }
        if(count>=4)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

int jump(vector<int>& nums)
{
    if(nums.size()==1)
        return 0;
    vector<int> dp(nums.size(), -1);
    int n = nums.size();
    dp[n-1]=0;
    dp[n-2]=0;
    for(int i=n-3; i>=0; i--)
    {
        int k=1;
        int v=2000000;
        while(k+1<n && k<=nums[i])
        {
            v=min(v,dp[i+k]);
            k++;
        }
        dp[i]=v+1;

    }
    return dp[0];
}