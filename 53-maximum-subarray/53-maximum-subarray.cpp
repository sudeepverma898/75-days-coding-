class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maxsum=0,min=nums[0];
    int currsum=0;
    int count=0, n=nums.size();
    for(int i=0; i<n; i++)
    {
        if(nums[i]<0)
            count++;
        if(nums[i]>min)
            min=nums[i];
        currsum+=nums[i];
        if(currsum>maxsum)
            maxsum=currsum;
        if(currsum<0)
            currsum=0;
    }
        if(count==n)
            return min;
    return maxsum;
    }
};