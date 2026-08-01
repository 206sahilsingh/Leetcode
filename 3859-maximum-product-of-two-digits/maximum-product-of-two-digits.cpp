class Solution {
public:
    int maxProduct(int n) {
       int num1=0;
       int num2=0;

        while(n>0){
           int x=n%10;
            n /=10;

            if(x>num1){
                num2=num1;
                num1=x;
            }

            else if(x>num2){
                num2=x;
            }

        }
        return num1*num2;
    }
};