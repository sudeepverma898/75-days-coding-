class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=nums.size();
        vector<int> ans(2,-1);
        if(s==0)
            return ans;
        int i=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(i!=s && nums[i]==target)
            ans[0]=i;
        int j=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        j--;
        if(j>=0 && nums[j]==target)
            ans[1]=j;
        return ans;
    }
};