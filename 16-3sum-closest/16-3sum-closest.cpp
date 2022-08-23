class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min=INT_MAX;
        int sum,minf,mins,mint;
        sort(nums.begin(),nums.end());
        for(int i=0; i<=nums.size()-3; i++){
            int left=i+1,right=nums.size()-1;
            while(left<right){
                sum=nums[left]+nums[right]+nums[i];
                if(abs(target-sum)<min)
                {
                    min=abs(target-sum);
                    minf=nums[left]; mins=nums[right]; mint=nums[i];
                }
                if(sum==target)
                    return sum;
                else if(sum<target)
                    left++;
                else
                    right--;
            }
        }
        return minf+mins+mint;
    }
};