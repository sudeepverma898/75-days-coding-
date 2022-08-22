class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0; i<=nums.size()-3; i++){
            if(i!=0){
                if(nums[i]==nums[i-1])
                    continue;
            }
            int left=i+1,right=nums.size()-1;
            int target=0-nums[i];
            while(left<right){
                if(nums[left]+nums[right]==target){
                    vector<int> triplet;
                    triplet.push_back(nums[i]);
                    triplet.push_back(nums[left]);
                    triplet.push_back(nums[right]);
                    res.push_back(triplet);
                    while(left<right && nums[left]==nums[left+1]) left++;
                    while(left<right && nums[right]==nums[right-1]) right--;
                    left++; right--;
                }
                else if(nums[left]+nums[right]>target)
                    right--;
                else
                    left++;
            }
        }
        return res;
    }
};