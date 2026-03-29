class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int j=0;
       for(int k=0; k<nums.size();k++){
        if(nums[k]%2 ==0){
            int temp=nums[j];
            nums[j]=nums[k];
            nums[k]=temp;
            j++;
        }
       } 
       return nums;
    }
};