class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int a = s1.size();

        if(a>s2.size())
            return false;

        sort(s1.begin(),s1.end());
        string temp;

        for(int i=0;i<=s2.size()-a; i++){
            temp = s2.substr(i,a);
            sort(temp.begin(),temp.end());

            if(temp==s1)
            return true;
        }

        return false;

    }
};