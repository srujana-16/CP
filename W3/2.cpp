// Find target element in sorted and rotated array
// Modified binary search
// Time Complexity : O(logn)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size()-1;
        

        while(start<=end)
        {
            int mid = start+(end-start)/2;
            if(nums[mid]==target)
                return mid;
            
            // To check if left part is sorted and update start and end accordingly
            if(nums[start]<=nums[mid])                                                             
            {
                if(nums[mid]>=target && nums[start]<=target)
                    end = mid-1;
                else 
                    start = mid+1;
            }

            // To check if right part is sorted and update start and end accordingly
            else
            {
                if(nums[end]>=target && nums[mid]<=target)
                    start = mid+1;
                else
                    end = mid-1;

            }
        }
        return -1;

    }
};