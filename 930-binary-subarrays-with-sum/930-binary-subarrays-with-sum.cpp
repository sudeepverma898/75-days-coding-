class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> mpp;
        int n=nums.size(), count=0;
        mpp.emplace(0,1);
        int prefixsum=0;
        for(int i=0; i<n; i++){
            prefixsum+=nums[i];
            if(mpp.find(prefixsum-goal)!=mpp.end())
                count+=mpp[prefixsum-goal];
            mpp[prefixsum]++;
        }
        return count;
    }
};