class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>count(256,0);
        int first=0, second=0, len=0;
        while(second<s.size()){
            count[s[second]]++;

            while(count[s[second]]>1){
                count[s[first]]--;
                first++;
            }

            len= max(len, second-first+1);
            second++;

        }
        return len;
    }
};