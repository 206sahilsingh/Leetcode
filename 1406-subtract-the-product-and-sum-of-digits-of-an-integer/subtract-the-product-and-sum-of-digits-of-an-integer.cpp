class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1, sum=0;
        int digit =0;
        while(n){
            digit=n%10;
            sum +=digit;
            pro *=digit;
            n/=10;
        }
        return pro-sum;
    }
};