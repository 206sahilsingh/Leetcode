class Solution {
public:
    string convert(string s, int numRows) {
        if(s.size()<2 || numRows==1)
        return s;

        vector<string>ans(numRows);
        int row=0;
        int dir =1;

        for(char ch:s){
            ans[row] +=ch;

            if(row==0)
            dir =1;

            else if(row==numRows-1)
            dir = -1;

            row +=dir;
        }

        string rows;
        for(string ch: ans){
            rows += ch;
        }
        return rows;
    }
};