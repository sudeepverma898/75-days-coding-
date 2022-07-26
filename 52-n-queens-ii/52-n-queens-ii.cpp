class Solution {
public:
    void fun(int col, vector<vector<string>> &ans, vector<string> &board, int n, vector<int> &left, vector<int> &lowerdiagonal, vector<int> &upperdiagonal){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0; row<n; row++){
            if(left[row]==0 && lowerdiagonal[row+col]==0 && upperdiagonal[n-1+(col-row)]==0){
                left[row]=1;
                lowerdiagonal[row+col]=1;
                upperdiagonal[n-1+(col-row)]=1;
                board[row][col]='Q';
                fun(col+1,ans,board,n,left,lowerdiagonal,upperdiagonal);
                board[row][col]='.';
                left[row]=0;
                lowerdiagonal[row+col]=0;
                upperdiagonal[n-1+(col-row)]=0;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0; i<n; i++)
            board[i]=s;
        vector<int> left(n,0), lowerdiagonal(2*n-1,0), upperdiagonal(2*n-1,0);
        fun(0,ans,board,n,left,lowerdiagonal,upperdiagonal);
        return ans.size();
    }
};