class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxavg=INT_MIN, windsum=0, windavg=0;
        int ws=0, n=nums.size();
        for(int we=0; we<n; we++){
            windsum+=nums[we];
            if(we>=k-1){
                windavg=windsum/k;
                maxavg=max(windavg, maxavg);
                windsum-=nums[ws++];
            }
        }
        return maxavg;
    }
};