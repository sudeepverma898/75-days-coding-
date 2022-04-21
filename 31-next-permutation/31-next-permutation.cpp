class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int c=-1,size=nums.size();
        for(int i=size-2; i>=0; i--)
        {
            if(nums[i]<nums[i+1])
            {
                c=i;
                break;
            }
        }
        if(c==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        else{for(int j=size-1; j>=0; j--)
        {
            if(nums[j]>nums[c])
            {
                swap(nums[c],nums[j]);
                break;
            }
        }
        reverse(nums.begin()+(c+1),nums.end());
            }
    }
};