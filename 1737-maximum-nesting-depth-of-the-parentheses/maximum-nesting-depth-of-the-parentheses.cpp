class Solution {
public:
    int maxDepth(string s) {
       int count =0, curr=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            curr++;
            count=max(curr,count);
        }
        if(s[i]==')')
            curr--;
       } 
       return count;
    }
};