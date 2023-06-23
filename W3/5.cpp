// finding element in a sorted matrix
// using the fact that the matrix is sorted, we can start from the top right corner
// if the element is greater than the target, we move left
// if the element is lesser than the target, we move down
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int i = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int j = n - 1;

        while (i >= 0 && i < m && j >= 0 && j < n)
        {
            if (matrix[i][j] == target)
                return 1;
            else if (matrix[i][j] > target)
                j--;
            else if (matrix[i][j] < target)
                i++;
        }
        return 0;
    }
};
