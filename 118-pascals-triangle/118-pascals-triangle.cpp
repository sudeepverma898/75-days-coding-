class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ne(numRows);
        for(int i=0; i<numRows; i++)
        {
            ne[i].resize(i+1);
            ne[i][0]=ne[i][i]=1;
            for(int j=1; j<i; j++)
            {
                ne[i][j]=ne[i-1][j-1]+ne[i-1][j];
            }
        }
        return ne;
    }
};