// find minimum in rotated sorted array
// using binary search
// if the mid element is greater than the last element, then the minimum element lies in the right half
class Solution {
public:
    int findMin(vector<int>& nums) {
        int minval = INT_MAX;
        int n = nums.size();
        int start = 0; 
        int end = n-1;
        
        while(start<end)
        {
            int mid = start + (end-start)/2;
            if(nums[mid]>=nums[end])
                start = mid+1;
            else end = mid;
        }
        return nums[start];
    }
};