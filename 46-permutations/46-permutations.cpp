class Solution {
public:
    void fun(int index, vector<int> &nums, vector<vector<int>> &ans, int size){
        if(index==size){
            ans.push_back(nums);
            return;
        }
        for(int i=index; i<size; i++){
            swap(nums[index],nums[i]);
            fun(index+1,nums,ans,size);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int size=nums.size();
        fun(0,nums,ans,size);
        return ans;
    }
};