class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> st, st2;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '#'){
                if(!st.empty())
                    st.pop();
            }
            else{
                st.push(s[i]);
            }
        }

        string ans;

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        for(int i = 0; i < t.size(); i++) {

            if(t[i] == '#'){
                if(!st2.empty())
                    st2.pop();
            }
            else{
                st2.push(t[i]);
            }
        }

        string ans2;

        while(!st2.empty()){
            ans2 += st2.top();
            st2.pop();
        }

        return ans == ans2;
    }
};