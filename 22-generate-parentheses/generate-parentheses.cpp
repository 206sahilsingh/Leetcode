class Solution {
public:

    void parentheses(int n, int left, int right,
                 vector<string> &ans, string &temporary) {
    

    if(temporary.length() == 2 * n) {
        ans.push_back(temporary);
        return;
    }

   
    if(left < n) {
        temporary.push_back('(');
        parentheses(n, left + 1, right, ans, temporary);
        temporary.pop_back();  
    }

    
    if(right < left) {
        temporary.push_back(')');
        parentheses(n, left, right + 1, ans, temporary);
        temporary.pop_back();  
    }
}

    vector<string> generateParenthesis(int n) {
      vector<string> ans;
    string temp = "";

    parentheses(n, 0, 0, ans, temp);

    return ans;  
    }
};