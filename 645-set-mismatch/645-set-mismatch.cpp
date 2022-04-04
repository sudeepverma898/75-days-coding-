class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> vec;
        map<int,int> mpp;
        int first,second;
        for(int i=0; i<nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        for(int i=1; i<=nums.size(); i++)
        {
            if(mpp[i]==2)
                first=i;
            if(mpp[i]==0)
                second=i;
        }
        vec.push_back(first);
        vec.push_back(second);
        return vec;
    }
};