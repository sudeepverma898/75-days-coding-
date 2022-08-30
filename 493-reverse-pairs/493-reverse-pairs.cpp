class Solution {
public:
    int merge(vector<int> &nums, int left, int mid, int right){
        int i=left, j=mid+1, inv_count=0;
        for(;i<=mid; i++){
            while(j<=right && nums[i]>2LL*nums[j])
                j++;
            inv_count+=(j-(mid+1));
        }
        vector<int> temp; i=left; j=mid+1;
        while(i<mid+1 && j<right+1){
            if(nums[i]<=nums[j]) temp.push_back(nums[i++]);
            else temp.push_back(nums[j++]);
        }
        while(i<mid+1) temp.push_back(nums[i++]);
        while(j<right+1) temp.push_back(nums[j++]);
        for(int i=left; i<=right; i++) 
            nums[i]=temp[i-left];
        return inv_count;
    }
    int mergesort(vector<int> &nums, int left, int right){
        int mid, inv_count=0;
        if(left>=right) return 0;
        mid=left+(right-left)/2;
        inv_count+=mergesort(nums, left, mid);
        inv_count+=mergesort(nums, mid+1, right);
        inv_count+=merge(nums, left, mid, right);
        return inv_count;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergesort(nums, 0, n-1);
    }
};