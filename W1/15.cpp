// check if is a palindrome or not
// consider only alphanumeric characters and lowercase the string
// reverse the string and check if it is equal to the original string
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string str;
        for (int i=0; i<n; i++)
        {
            if(iswalnum(s[i]))
            {
                str.push_back(tolower(s[i]));
            }
        }
        int m = str.size();
        if(m==0)
            return true;
        string rev = str;
        reverse(rev.begin(), rev.end());
        if(rev==str)
            return true;
        return false;

    }
};