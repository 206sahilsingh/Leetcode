class Solution {
public:
    int missingInteger(vector<int>& nums) {
      int curr=nums[1],ans=nums[0];

      for(int i=1;i<nums.size();i++){
            if((nums[i-1]+1)==nums[i]){
                ans +=nums[i];
            }
            else
            break;
      }

      int miss=ans;

        while(true){

            bool found=false;

            for(int i=0;i<nums.size();i++){
                if(nums[i]==miss){
                    found=true;
                    break;
                }
            }

            if(!found){
                return miss;
            }
            miss++;
        }
        return miss;
    }
};