// return a vector of the matrix in spiral order
// time complexity: O(m*n)
// using 4 pointers to indicate the 4 edges of the matrix
// iterate the matrix in spiral order in each direction, each for loop will push back the elements in the corresponding direction
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left =0, top=0, right=m-1, buttom = n-1;
        vector<int> ans;

        while(ans.size()!=m*n)
        {
            for(int i = left; ans.size()!=m*n && i<=right; i++)
                ans.push_back(matrix[top][i]);
            
            top++;

            for(int i = top; ans.size()!=m*n && i<=buttom; i++)
                ans.push_back(matrix[i][right]);

            right--;

            for(int i = right;ans.size()!=m*n && i>=left; i--)
                ans.push_back(matrix[buttom][i]);

            buttom--;

            for(int i = buttom;ans.size()!=m*n && i>=top; i--)
                ans.push_back(matrix[i][left]);

            left++;
        }

        return ans;

    }
};