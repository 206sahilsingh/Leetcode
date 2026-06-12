class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() <=1)
            return s;

        string lps="";

        for(int i =0;i<s.size();i++) {
            int low = i;
            int high = i;

            while(low >=0 && high<s.size() && s[low]==s[high]){
                low--;
                high++;
            }

            string palindromic =s.substr(low+1,high - low-1);

            if(palindromic.size() >lps.size()){
                lps =palindromic;
            }

            low =i-1;
            high =i;

            while(low >= 0 && high<s.size() && s[low]==s[high]){
                low--;
                high++;
            }

            palindromic =s.substr(low +1,high-low -1);

            if(palindromic.size() >lps.size()){
                lps =palindromic;
            }
        }

        return lps;
    }
};