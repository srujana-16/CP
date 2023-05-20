// maximum product subarray
// kadane's algorithm
// saving the maximum product from the right and left side
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product1=INT_MIN;
        int currProduct=1;
        for(int i=0; i<nums.size(); i++)
        {
            currProduct*=nums[i];
            if(currProduct>product1)
                product1=currProduct;
            if(currProduct==0)
                currProduct=1;
        }
        int product2=INT_MIN;
        currProduct=1;
        reverse(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            currProduct*=nums[i];
            if(currProduct>product2)
                product2=currProduct;
            if(currProduct==0)
                currProduct=1;
        }
        return max(product1, product2);
    }
};