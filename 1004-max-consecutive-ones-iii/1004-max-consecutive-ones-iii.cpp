class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxcount=0, sum=0;
        int ws=0, n=nums.size();
        for(int we=0; we<n; we++){
            sum+=nums[we];
            while((we-ws+1)-sum>k){
                sum-=nums[ws++];
            }
            if((we-ws+1)-sum<=k)
                maxcount=max(maxcount, we-ws+1);
        }
        return maxcount;
    }
};