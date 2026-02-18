class Solution {
public:
    int trailingZeroes(int n) {
    long long count=0;

       while(n>=5){
       count= count + n/5;
       n/=5;

       } 
       return count;
    }
};