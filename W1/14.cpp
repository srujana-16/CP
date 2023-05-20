// check if two strings are anagram or not
// brute force - O(nlogn) - sort both the strings and check if they are equal or not
// optimal solution - O(n) - use a hashmap to store the frequency of each character in the first string

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m)
            return false;

        // brute force approach 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if(s!=t)
            return false;
        return true;

        // optimal approach
        int arr[26]={0};
        for(int i=0; i<n; i++)
        {
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(int i=0; i<26; i++)
        {  
            if(arr[i]!=0)
                return false;
        }
        return true;
    }
};