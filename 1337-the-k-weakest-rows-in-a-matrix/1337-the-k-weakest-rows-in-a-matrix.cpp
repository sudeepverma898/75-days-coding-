class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int size=mat.size(), count;
        int size2=mat[0].size();
        priority_queue<pair<int, int>> maxheap; 
        for(int i=0; i<size; i++){
            count=0;
            for(int j=0; j<size2; j++){
                if(mat[i][j]==1)
                    count++;
            }
            maxheap.push({count, i});
            if(maxheap.size()>k)
                maxheap.pop();
        }
        vector<int> ans;
        while(maxheap.size()){
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};