// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// Optimized solution: a+b=target, so b=target-a, find b in the array
// Time Complexity: O(n)    
// Space Complexity: O(n)   
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        int i=0;
        while(i<n)
        {
            for(int j=i+1; j<n; j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans; 
                }
            }
            i++;
        }
        return ans;
    }
};