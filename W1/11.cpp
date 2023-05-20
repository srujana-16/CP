// Container with most water
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) 
// and (i, height[i]). Find two lines that together with the x-axis form a container, such that the container contains the most water
// Return the maximum amount of water a container can store.
// two pointer approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = INT_MIN;
        int n=height.size();
        int j=n-1;
        int i=0;
        while(i<j)
        {
            int a = min(height[i], height[j])*(j-i);
            area=max(a,area);
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return area;
    }
};