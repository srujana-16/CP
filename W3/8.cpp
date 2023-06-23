// Given 2 sorted arrays, find the median of the array formed by merging them.
// merge the two arrays, sort and find the median
// Time Complexity: O(nlogn)
// brute force approach
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> array;

        // O(n)
        for(auto i:nums1) 
            array.push_back(i);

        // O(n)
        for(auto i:nums2)
            array.push_back(i);

        // O(nlogn)
        sort(array.begin(), array.end());

        int n = array.size();
        float median;
        if(n%2)
            median = array[n/2];
        else
        {
            median = (array[n/2]+array[(n/2) - 1])/2.0;
        }

        return median;
    }
};