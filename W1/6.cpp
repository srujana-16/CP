// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// using left and right products
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> product(n,1);
        int left =1;
        for(int i=1; i<n; i++)
        {
            left*=nums[i-1];
            product[i]*=left;
        }
        int right = 1;
        for(int j=n-2; j>=0; j--)
        {
            right*=nums[j+1];
            product[j]*=right;
        }
        return product;
    }
};