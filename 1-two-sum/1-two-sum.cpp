class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> vec;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])==mp.end())
                mp.emplace(nums[i],i);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end() && i!=mp[target-nums[i]])
            {
                vec.push_back(i);
                vec.push_back(mp[target-nums[i]]);
                break;
            }
        }
        return vec;
    }
};