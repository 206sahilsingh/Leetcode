class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int rev=0,digit=0;
        int num=n;
        while(num>0){
            digit = num%10;
            rev =(rev*10)+digit;
            num /=10;
        }
        int sum=0;

        int first = min(n,rev);
        int last = max(n,rev);

        for(int i=first; i<=last; i++){
            if(i<2)
            continue;

            bool prime = true;

            for(int j=2; j*j<=i; j++){
                if(i%j==0){
                prime =false;
                break;
                }
            }
            if(prime){
            sum +=i;}
        }

        return sum;
    }
};