class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      if(nums.size()==1){
      return nums[0];  
    }

    int i=0,j=1;
    while(j<nums.size()){
        if(nums[i]==nums[j]){
            i +=2;
            j+=2;
        }
        else{
            return nums[i];
        }
    }
    return nums[i];
    }
};