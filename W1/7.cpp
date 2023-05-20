// maximum subarray sum
// kadane's algorithm
//The idea of Kadane’s algorithm is to maintain a variable currSum that stores the maximum sum contiguous subarray ending at current index 
//and a variable sum stores the maximum sum of contiguous subarray found so far, 
//Everytime there is a positive-sum value in currSum compare it with sum and update sum if it is greater than sum.
//If currSum is negative, then currSum is set to 0 - idea behind this is that the subarray is reset if it further decreases the sum.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int n=nums.size();
        int currSum=0;
        for(int i=0; i<n; i++)
        {
            currSum+=nums[i];
            if(currSum>sum)
                sum=currSum;
            if(currSum<0)
                currSum=0;
        }
        return sum;
    }
};