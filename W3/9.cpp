// given 2 sorted arrays, find the median of the array formed by merging them
// form a sorted merged array and find the median
// two pointer approach with extra space
// Time Complexity: O(n1+n2)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i =0; 
        int j =0;
        vector<int> array;

        while(i<n1 && j<n2)
        {
            if(nums1[i]<=nums2[j])
                array.push_back(nums1[i++]);
            else 
                array.push_back(nums2[j++]);
        }
        
        while(i<n1)
            array.push_back(nums1[i++]);
        while(j<n2)
            array.push_back(nums2[j++]);

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