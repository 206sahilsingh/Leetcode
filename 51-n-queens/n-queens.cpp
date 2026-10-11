class Solution {
public:
    void find(int row,int n,vector<vector<string>>&ans,vector<string>&Board,vector<bool>&col,vector<bool>&left,vector<bool>&right){
        if(row==n){
            ans.push_back(Board);
            return;
        }

        for(int j=0;j<n;j++){
            if(col[j]==0 &&left[n-1+j-row]==0 &&right[row+j]==0){
                col[j]=1;
                Board[row][j]='Q';
                left[n-1+j-row]=1;
                right[row+j]=1;
                find(row+1,n,ans,Board,col,left,right);
                col[j]=0;
                Board[row][j]='.'; 
                left[n-1+j-row]=0;
                right[row+j]=0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>Board(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                Board[i].push_back('.');
            }
        }
        vector<bool>col(n,0);
        vector<bool>left(2*n-1,0);
        vector<bool>right(2*n-1,0);
        find(0,n,ans,Board,col,left,right);

        return ans; 
    }
};