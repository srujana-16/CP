// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
// use recursion to generate all possible combinations of parentheses
// open - ( and close - ), if open < n, then we can add (, if close < open, then we can add )
class Solution {
public:
    void initparan(vector<string>& res, string current, int open, int close, int n)
    {
        if(current.size()==2*n)
        {
            res.push_back(current);
            return;
        }
        
        if(open<n)
            initparan(res, current + '(', open + 1, close, n);
        
        if(close<open)
            initparan(res, current + ')', open, close+1, n);

    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        initparan(res, "", 0, 0, n);
        return res;
    }
};