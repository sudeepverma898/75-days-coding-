class Solution {
public:
    void sortColors(vector<int>& nums) {
        int m,min;
        for(int i=0; i<nums.size()-1; i++)
        {
            min=nums[i];
            m=i;
            for(int j=i; j<nums.size(); j++)
            {
                if(nums[j]<min)
                {min=nums[j]; m=j;}
            }
            swap(nums[i],nums[m]);
        }
    }
};