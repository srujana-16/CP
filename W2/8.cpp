// Given an integer array nums that may contain duplicates, return all possible subsets
// using recursion to generate all possible subsets
// sort the array first, then check if the current subset is already present in the result or not
class Solution {
public:
    void solve(vector<vector<int>>& res, vector<int>& nums, vector<int>& current, int start)
    {
        if(start==nums.size())
        {
            bool ispresent = find(res.begin(), res.end(), current) != res.end();
            if(!ispresent)
                res.push_back(current);
            return;
        }

        current.push_back(nums[start]);
        solve(res, nums, current, start+1);
        current.pop_back();
        solve(res, nums, current, start+1);
        
    }

    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> current;
        sort(nums.begin(), nums.end());
        solve(res, nums, current, 0);
        return res;
    }
};