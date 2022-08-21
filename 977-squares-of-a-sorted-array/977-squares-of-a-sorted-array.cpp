class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len=nums.size();
        vector<int> ne(len,0);
        int index=len-1;
        int left=0;
        int right=len-1;
        while(left<right){
            if(abs(nums[left])<=abs(nums[right]))
            {
                ne[index]=nums[right]*nums[right];
                right-=1; index-=1;
            }
            else
            {
                ne[index]=nums[left]*nums[left];
                left+=1; index-=1;
            }
        }
        ne[index]=nums[left]*nums[left];
        return ne;
    }
};