class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even,odd;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        int i=0,j=0,index=0;
        while(i<even.size() || j<odd.size())
        {
            if(i<even.size())
            {
                nums[index]=even[i];
                i++;
                index++;
            }
            if(j<odd.size())
            {
                nums[index]=odd[j];
                j++;
                index++;
            }
        }
        return nums;
    }
};