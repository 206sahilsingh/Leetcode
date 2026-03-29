class Solution {
public:
    bool isPalindrome(string s) {
      string ans;
      int i=0;
      while(i<s.size()){
        if(s[i]>='A' && s[i]<='Z'){
            ans+=s[i]+32;
            i++;
        }
        else if(s[i]>='a' &&s[i]<='z'){
            ans+= s[i];
            i++;
        }
        else if(s[i]>='0'&& s[i]<='9'){
            ans+=s[i];
            i++;
        }
        else{
            i++;
        }
      } 

    int first=0, second=ans.size()-1;
    while(first<second){
        if(ans[first]==ans[second]){
            first++, second--;
        }
        else{
            return false;
        }
    }
    return true;
    }
};