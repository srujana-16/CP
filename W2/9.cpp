// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
// using backtracking
// swapper function is used to swap the elements of the array starting from the start index
// init function is used to initialize the array and push it into the result vector
class Solution {
public:
    void init(vector<vector<int>>& res, vector<int>& nums, int start)
    {
        if(start==nums.size()-1)
        {
            res.push_back(nums);
            return;
        }
        for(int i=start; i<nums.size(); i++)
        {
            swap(nums[i], nums[start]);
            init(res, nums,start+1);
            swap(nums[i], nums[start]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res; 
        int start =0;
        init(res, nums, start);
        return res;

    }
};