// given a sorted matrix, find the kth smallest element in the matrix
// insert all elements into a vector, sort the vector, return the kth element
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        vector<int> elements;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                elements.push_back(matrix[i][j]);
            }
        }
        if (elements.size() < k) {
            return -1;
        }
        sort(elements.begin(), elements.end());
        return elements[k-1];
    }
};
