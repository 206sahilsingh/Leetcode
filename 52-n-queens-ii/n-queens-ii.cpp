class Solution {
public:
    bool check(int n,vector<string>&Board,int i,int j){
        //upper left diagonal
        int row=i,col=j;
        while(row>-1 &&col>-1){
            if(Board[row][col]=='Q')
                return 0;

            row--, col--;
        }
        //upper right diagonal
        row=i, col=j;
        while(row>-1&& col<n ){
            if(Board[row][col]=='Q')
                return 0;

            row--, col++;
        }
        return 1; 
    }

    void find(int row,int n,int &count,vector<string>&Board,vector<bool>&col){
        if(row==n){
            count=count +1;
            return;
        }

        for(int j=0;j<n;j++){
            if(col[j]==0 &&check(n,Board,row,j)){
                col[j]=1;
                Board[row][j]='Q';
                find(row+1,n,count,Board,col);
                col[j]=0;
                Board[row][j]='.'; 
            }
        }
    }

    int totalNQueens(int n) {
       int count=0;
       vector<string>Board(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                Board[i].push_back('.');
            }
        }
        vector<bool>col(n,0);
        find(0,n,count,Board,col);

        return count;  
    }
};