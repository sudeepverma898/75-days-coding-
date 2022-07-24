class Solution {
public:
    void fun(vector<int> &vec, vector<vector<int>> &ans, vector<int> &mpp, vector<int> nums, int size){
        if(vec.size()==size){
            ans.push_back(vec);
            return;
        }
        for(int i=0; i<size; i++){
            if(!mpp[i]){
                vec.push_back(nums[i]);
                mpp[i]=1;
                fun(vec,ans,mpp,nums,size);
                mpp[i]=0;
                vec.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> vec;
        vector<vector<int>> ans;
        int size=nums.size();
        vector<int> mpp(size,0);
        fun(vec,ans,mpp,nums,size);
        return ans;
    }
};