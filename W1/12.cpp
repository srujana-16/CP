// find the max element in a sliding window of size k
// done using brute force
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0; i<=n-k; i++)
        {
            int temp = *max_element(nums.begin()+i, nums.begin()+(k+i));
            ans.push_back(temp);
        }
        return ans;
    }
};