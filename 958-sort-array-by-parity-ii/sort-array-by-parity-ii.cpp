class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size()/2;
       vector<int>even(n,0);
       vector<int>odd(n,0);
       int j=0,k=0;

       for(int i=0; i<nums.size(); i++){
        if(nums[i]%2==0){
            even[j]=nums[i];
            j++;
        }
        else{
            odd[k]=nums[i];
            k++;
        }
       }

       j=0,k=0;
       for(int i=0; i<nums.size();i++){
        if(i%2==0){
            nums[i]=even[j];
            j++;
        }
        else{
            nums[i]=odd[k];
            k++;
        }
       }
       return nums;
    }
};