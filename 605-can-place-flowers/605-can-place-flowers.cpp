class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        deque<int> dq(flowerbed.begin(),flowerbed.end());
        dq.push_front(0);
        dq.push_back(0);
        for(int i=1; i<dq.size()-1; i++)
        {
            if(dq[i]==0)
            {
                if(dq[i-1]==0 && dq[i+1]==0)
                {
                    dq[i]=1;
                    n--;
                }
            }
        }
        if(n<=0)
            return true;
        return false;
    }
};