// Given an array of strings strs, group the anagrams together. You can return the answer in any order.
// using hash tables 
// sort the string and then use it as a key in the hash table
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>val;
        vector<vector<string>> ans;

        for(int i=0; i< strs.size(); i++)
        {
            string sortedstr = strs[i];
            sort(sortedstr.begin(), sortedstr.end());
            val[sortedstr].push_back(strs[i]);
        }

        for(auto i:val)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};