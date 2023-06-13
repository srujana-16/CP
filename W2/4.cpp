// Given an unsorted integer array nums, return the smallest missing positive integer.
// using sets 
// inserting all the elements of the array in the set and then checking for the smallest positive integer
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        int i=1; 
        while(i<=nums.size())
        {
            if(s.find(i)!=s.end())
                i++;
            else
                return i;
        }
        return i;
        
    }
};