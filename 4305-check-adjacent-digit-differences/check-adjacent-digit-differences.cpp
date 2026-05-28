class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int j=0;
        for(int i=0; i<s.size(); i++){
            if(j<3){
            j = abs(s[i]-s[i+1]);
            }
            else{
                return false;
            }
        }
        return true;
    }
};