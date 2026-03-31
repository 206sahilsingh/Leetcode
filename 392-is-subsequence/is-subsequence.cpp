class Solution {
public:
    bool isSubsequence(string s, string t) {
     int b=0;
     for(int a=0; a<t.size(); a++){
        if(t[a]==s[b]){
        b++;
        }
     }
     if(b == s.size())
     return true;

     else
     return false;
    }
};