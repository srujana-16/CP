// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and 
// nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.
// done using sorting and two pointer approach

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> s;
        vector<vector<int>> ans;
        int sum=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++)
        {
            int low = i+1;
            int high = n-1;
            while(low<high)
            {
                if(nums[i]+nums[low]+nums[high]==sum)
                {
                    s.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }
                else if(nums[i]+nums[low]+nums[high]<sum)
                    low++;
                else
                    high--;
            }
        }
        for(auto i:s)
            ans.push_back(i);

        return ans;
    }
};