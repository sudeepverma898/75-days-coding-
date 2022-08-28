class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length=INT_MAX, n=nums.size();
        int ws=0, we=0, windsum=0, f=0;
        for(; we<n; we++){
            windsum+=nums[we];
            while(windsum>=target){
                f=1;
                length=min(length, we-ws+1);
                windsum-=nums[ws++];
            }
        }
        if(f==0)
            return 0;
        return length;
    }
};