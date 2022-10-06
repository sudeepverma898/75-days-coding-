class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size(),flag=0;
        if(size<k){
            int rem1=size%2;
            int rem2=k%2;
            if(rem1==rem2 && rem1==0)
                flag=0;
            else
            {
                k=k%size; flag=1;
            }
        }
        if(size!=1 || size==k || flag==1)
        {reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());}
    }
};