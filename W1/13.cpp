// longest palindrome substring
// brute force - O(n^3) - checking if each substring is palindrome or not and returning the longest one
// O(n) - to check if a string is palindrome or not, O(n^2) - to check for all substrings

// optimal solution - O(n^2) - expand around center for each character in the string
// edge case - even length palindorme dont have a specific center character
class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int n = s.size();
        for(int i=0; i<n; i++)
        {
            //odd string 
            int l=i, r=i;
            while(l>=0 && r<s.size() && s[l]==s[r])
            {
                if(ans.size()<=r-l)
                    ans = s.substr(l, r-l+1);
                l--;
                r++;
            }

            //even string
            l=i, r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r])
            {
                if(ans.size()<=r-l)
                    ans = s.substr(l, r-l+1);
                l--;
                r++;
            }

        }
        return ans;
    }
};