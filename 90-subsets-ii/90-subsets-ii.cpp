class Solution {
public:
    void fun(int index, vector<int> &nums, vector<int> &level, vector<vector<int>> &ans, int size){
        ans.push_back(level);
        for(int i=index; i<size; i++){
            if(i!=index && nums[i]==nums[i-1]) continue;
            level.push_back(nums[i]);
            fun(i+1,nums,level,ans,size);
            level.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int size=nums.size();
        vector<int> level;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        fun(0,nums,level,ans,size);
        return ans;
    }
};