class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, maxcount=0, n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==1) count+=1;
            else count=0;
            if(count>maxcount) maxcount=count; 
        }
        return maxcount;
    }
};