// Given an integer array nums of unique elements, return all possible subsets
// using recursion to generate all possible subsets

class Solution {
public:
    void init(vector<vector<int>>& res, vector<int>& current, vector<int>& nums, int start)
    {
        int n = nums.size();

        if(start==n)
        {
            res.push_back(current);
            return;
        }

        current.push_back(nums[start]);
        init(res, current, nums, start+1);
        current.pop_back();
        init(res, current, nums, start+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> current;
    
        init(res, current, nums, 0);
        return res;
    }
};