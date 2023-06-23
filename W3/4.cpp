class Solution
{
// given a sorted matrix, find the kth smallest element in the matrix
// lesser space complexity than 3.cpp
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        int i = 0;
        int j = 0;
        int n = matrix.size();

        vector<int> array;
        while (i < n && j < n)
        {
            if (j == n - 1)
            {
                array.push_back(matrix[i][j]);
                j = 0;
                i++;
            }
            else
            {
                array.push_back(matrix[i][j]);
                j++;
            }
        }

        sort(array.begin(), array.end());
        return array[k - 1];
    }
};