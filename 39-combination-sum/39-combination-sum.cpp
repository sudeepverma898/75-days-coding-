class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> vec;
        int s=candidates.size();
        fun(0,candidates,ans,vec,target,s);
        return ans;
    }
    void fun(int index, vector<int> &can, vector<vector<int>> &ans, vector<int> &vec, int target, int size)
    {
        if(target==0){
            ans.push_back(vec);
        }
        else
        {
            if(index==size){
                return;
            }
            vec.push_back(can[index]);
            if(target-can[index]>=0)
                fun(index,can,ans,vec,target-can[index],size);
            vec.pop_back();
            fun(index+1,can,ans,vec,target,size);
        }
        
    }
};