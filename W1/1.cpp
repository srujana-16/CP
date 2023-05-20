// minimum length of subarray with sum >= target
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        int ans = INT_MAX, sum = 0, i = 0, j = 0;
        while (i < n)
        {
            sum += nums[i];
            if (sum < target)
                i++;
            else
            {
                while (sum >= target)
                {
                    ans = min(ans, i + 1 - j);
                    sum -= nums[j];
                    j++;
                }
                i++;
            }
        }
        if (ans == INT_MAX)
            return 0;
        else
            return ans;
    }
};

