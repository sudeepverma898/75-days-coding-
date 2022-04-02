class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max1=nums[0],max2=LONG_MIN,max3=LONG_MIN;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]>max1)
            {
                max3=max2;
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2 && nums[i]!=max1)
            {
                max3=max2;
                max2=nums[i];
            }
            else if((nums[i]>max3 && nums[i]!=max2) && nums[i]!=max1)
            {
                max3=nums[i];
            }
        }
        if(max3==LONG_MIN)
            return (int)max1;
        return (int)max3;
    }
};