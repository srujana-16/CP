// Given a string s, find the length of the longest substring without repeating characters.
// using map to account for all the characters in the string instead of array of size 26
// O(n) - using sliding window approach
//
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int maxlen = 0;
        int len = 0;
        int n = s.size();
        if (s.empty())
            return 0;
        unordered_map<char, int> freq;
        int start = 0;

        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
            if (freq[s[i]] > 1)
            {
                while (freq[s[i]] > 1)
                {
                    freq[s[start]]--;
                    start++;
                }
            }
            len = i - start + 1;
            maxlen = max(maxlen, len);
        }

        return maxlen;
    }
};