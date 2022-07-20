class Solution {
public:
    void fun(int index, int target, vector<int> &can, vector<int> &vec, vector<vector<int>> &ans, int size){
        if(target==0){
            ans.push_back(vec);
            return;
        }
        for(int i=index; i<size; i++)
        {
            if(i>index && can[i]==can[i-1]) continue;
            if(can[i]>target) break;
            vec.push_back(can[i]);
            fun(i+1,target-can[i],can,vec,ans,size);
            vec.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int size=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> vec;
        fun(0,target,candidates,vec,ans,size);
        return ans;
    }
};