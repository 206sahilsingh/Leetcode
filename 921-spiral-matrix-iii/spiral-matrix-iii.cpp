class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rstart, int cstart) {
            vector<vector<int>>direction={{0,1},{1,0},{0,-1},{-1,0}};
        vector<vector<int>>result;
        int index=0;
        int step=1;
        result.push_back({rstart,cstart});

        while(result.size()< (rows*cols)){
        
            for(int i=0;i<step;i++){
                rstart+=direction[index][0];
                cstart +=direction[index][1];

                if(rstart>=0 &&rstart<rows &&cstart>=0 &&cstart<cols){
                    result.push_back({rstart,cstart});
                }
            }
            index =(index+1)%4;

             if(index==0||index==2){
                step++;
            }
        }
        return result;
    }
};