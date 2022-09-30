#define ppi pair<int,int> 
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size(), ele;
        vector<int> ans;
        unordered_map<int, int> mpp;
        for( int i = 0; i < n; i ++ )
            mpp[nums[i]]++;
        priority_queue<ppi, vector<ppi>, greater<ppi>> mini;
        for(auto it = mpp.begin(); it != mpp.end(); it ++ ){
            mini.push({it->second, it->first});
            if(mini.size()>k)
                mini.pop();
        }
        while(mini.size()>0){
            ans.push_back(mini.top().second);
            mini.pop();
        }
        return ans;
    }
};