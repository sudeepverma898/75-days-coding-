class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size(), prefixsum=0, count=0;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0)
                nums[i]=0;
            else
                nums[i]=1;
        }
        unordered_map<int, int> mpp;
        mpp.emplace(0,1);
        for(int i=0; i<n; i++){
            prefixsum+=nums[i];
            if(mpp.find(prefixsum-k)!=mpp.end())
                count+=mpp[prefixsum-k];
            mpp[prefixsum]++;
        }
        return count;
    }
};