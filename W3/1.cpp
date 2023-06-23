// Binary Search - Recursive
// Time Complexity : O(logn)
class Solution {
public:
    int binary_search(int start, int end, vector<int>& nums, int target)
    {
        int mid = start+(end-start)/2;
    
        while(start<=end)
        {
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                return binary_search(mid+1,end, nums, target);
            else 
                return binary_search(start, mid-1, nums, target);
        }
        return -1;
        
    }
    int search(vector<int>& nums, int target) {
        
        int output = binary_search(0, nums.size()-1, nums, target);
        return output;

    }
};