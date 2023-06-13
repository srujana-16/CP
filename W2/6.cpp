// Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].
// using recursion to generate all possible combinations of k numbers from 1 to n
class Solution {
public:
    void init(vector<vector<int>>& res,int n, int k, vector<int>& current, int start)
    {
        if(current.size()==k)
        {
            res.push_back(current);
            return;
        }

        for(int i=start; i<=n; i++)
        {
            current.push_back(i);
            init(res, n, k, current, i+1);
            current.pop_back();

        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> current;
        init(res, n, k, current, 1);
        return res;
    }
};