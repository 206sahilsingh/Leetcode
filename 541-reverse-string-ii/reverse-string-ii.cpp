class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0,j=k-1;

         while(i<s.size()){
            j = min(i+k-1,(int)s.size()-1);
            reverse(s.begin()+i,s.begin()+j+1);
            i=j+1+k;
         }
         return s;
    }
};