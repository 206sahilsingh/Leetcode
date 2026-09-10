class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size() !=s2.size())
            return false;
        
        vector<char>num1;
        vector<char>num2;

       int count =0;

       for(int i=0;i<s1.size();i++){
        if(count<3){
        if(s1[i] !=s2[i]){
        count++;
        num1.push_back(s1[i]);
        num2.push_back(s2[i]);
        }
        }
       }
       reverse(num2.begin(),num2.end());
       if(count==0){
        return true;
       }
       if(count==2 && num1==num2)
        return true;

        return false;
    }
};