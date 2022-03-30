class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len=nums.size();
        vector<int> ne(len,0);
        int left=0;
        int right=len-1;
        int k=len-1;
        while(left<=right)
        {
            if(pow(nums[left],2)>=pow(nums[right],2))
            {
                ne[k]=pow(nums[left],2);
                left++;k--;
            }
            else
            {
                ne[k]=pow(nums[right],2);
                right--;k--;
            }
        }
        return ne;
    }
};