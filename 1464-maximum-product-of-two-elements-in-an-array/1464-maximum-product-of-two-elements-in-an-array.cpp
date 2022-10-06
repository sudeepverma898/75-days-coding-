class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi1=INT_MIN, maxi2=INT_MIN, size=nums.size();
        for(int i=0; i<size; i++){
            if(nums[i]>maxi1){
                maxi2=maxi1;
                maxi1=nums[i];
            }
            else{
                if(nums[i]>maxi2)
                    maxi2=nums[i];
            }
        }
        return (maxi1-1)*(maxi2-1);
    }
};