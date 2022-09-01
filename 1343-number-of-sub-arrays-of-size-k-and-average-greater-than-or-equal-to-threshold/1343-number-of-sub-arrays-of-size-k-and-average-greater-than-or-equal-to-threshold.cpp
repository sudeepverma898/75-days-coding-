class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0, ws=0, n=arr.size(), windowsum=0;
        double thres=(double)threshold;
        double avg;
        for(int we=0; we<n; we++){
            windowsum+=arr[we];
            avg=(double)windowsum/(we-ws+1);
            if((we-ws+1)==k)
            {
                if(avg>=thres)
                    count++;
                windowsum-=arr[ws++];
            }
        }
        return count;
    }
};