class Solution {
public:
    bool check(vector<int>& nums) {
        int size=nums.size(), count=0, i;
        if(nums[0]>=nums[size-1]){
            for(i=0; i<size-1; i++){
                if(nums[i]>nums[i+1])
                    break;
            }
            i++;
            for(;i<size-1; i++)
            {
                if(nums[i]>nums[i+1])
                    return false;
            }
        }
        else{
            for(int k=0; k<size-1; k++){
                if(nums[k]>nums[k+1])
                    return false;
            }
        }
        return true;
    }
};