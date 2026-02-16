class Solution {
public:
    int findComplement(int num) {
       int ans=0,rem;
       long long mul=1;
       while(num>0){
        rem= num%2;
        rem= rem^1;
        num/=2;
        ans=ans+ rem*mul;
        mul*=2;
       } 
       return ans;
    }
};