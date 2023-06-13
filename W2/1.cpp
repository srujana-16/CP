// Twosum problem using hash tables in O(n) time and O(n) space
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            auto val = m.find(target-nums[i]);
            if(val!=m.end() && val->second!=i)
                return{i, val->second};
            else
                m.insert({nums[i], i});
        }
        return {-1,-1};
    }
};