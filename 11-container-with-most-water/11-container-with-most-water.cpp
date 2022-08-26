class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=INT_MIN;
        int left=0, right=height.size()-1;
        while(left<right){
            int ans=min(height[left],height[right])*(right-left);
            if(ans>max)
                max=ans;
            if(height[left]<height[right])
                left++;
            else right--;
        }
        return max;
    }
};