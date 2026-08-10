class Solution {
public:

    unordered_map<char,string>mp{
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"},
        };

   void solve(int index,string &digits, string &curr,vector<string>&ans){
    if(index==digits.size()){
        ans.push_back(curr);
        return;
    }

    string letter= mp[digits[index]];

    for(char ch: letter){
        curr.push_back(ch);

        solve(index+1,digits,curr,ans);

        curr.pop_back();
    }
   }

    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.empty()){
            return ans;
        }

       string curr="";
       solve(0,digits,curr,ans);

       return ans;
    }
};