class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int num=x, ans=0, rev;
        while(x>0){
            rev=x%10;
            x/=10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10)
            return false;
            ans=ans*10+rev;
        }
        if(ans == num)
        return true;
        else
        return false;

    }
};