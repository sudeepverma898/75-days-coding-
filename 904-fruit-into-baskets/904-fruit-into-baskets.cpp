class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ws=0, maxfruits=0, n=fruits.size();
        unordered_map<int, int> mpp;
        for(int we=0; we<n; we++){
            int fruittype=fruits[we];
            mpp[fruittype]++;
            while(mpp.size()>2){
                int leftfruit=fruits[ws];
                mpp[leftfruit]-=1;
                if(mpp[leftfruit]==0)
                    mpp.erase(leftfruit);
                ws++;
            }
            maxfruits=max(maxfruits, we-ws+1);
        }
        return maxfruits;
    }
};