class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int Odd=0, Even=0;

        for(int i=1;i<=2*n;i++){
            if(i%2==0)
            Even +=i;

            else
            Odd +=i;
        }
        int ans=1;

        for(int i=1; i<=min(Even,Odd);i++){
            if(Even%i==0 && Odd%i==0)
            ans=i;
        }
        return ans;
    }
};