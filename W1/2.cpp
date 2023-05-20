// number of Palindromic Substrings
class Solution {
public:
    int countSubstrings(string s) {
        int ans=0; 
        int n = s.size();
        for(int i=0; i<n; i++)
        {
            int x=i-1, y=i+1;
            while(x>=0 && y<n && s[x]==s[y])
            {
                ans++;
                x--; 
                y++;
            }
            x=i-1, y=i;
            while(x>=0 && y<n && s[x]==s[y])
            {
                ans++;
                x--; 
                y++;
            }
        }
        return ans+n;
    }
};