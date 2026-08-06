class Solution {
public:
    int smallestNumber(int n, int t) {
        bool flag=true;
        while(flag){
            int temp=n;
            int digit=0,pro=1;
            while(temp>0){
               digit =temp%10;
               temp /=10;
               pro *=digit; 
            }
            if(pro%t==0){
                flag =false;
                return n;
            }
            else{
                n++;
            }
        }
       return n;
    }
};