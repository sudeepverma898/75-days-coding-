class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        int maxi=0;
        for(int i=0; i<nums.size(); i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]>mpp[maxi])
                maxi=nums[i];
        }
        return maxi;
    }
};