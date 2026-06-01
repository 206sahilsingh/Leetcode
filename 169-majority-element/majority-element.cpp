class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moore majority voting element
      int count=0, ans=nums[0];

      for(int i=0;i<nums.size();i++){
        if(count == 0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            count++;
        }
        else{
            count--;
        }
      } 
      return ans; 
    }
};