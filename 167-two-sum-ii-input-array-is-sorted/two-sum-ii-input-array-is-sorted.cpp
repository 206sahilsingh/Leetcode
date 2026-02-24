class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int start =0, end= nums.size()-1 ;
        while(start<end){
            if(nums[start]+nums[end]==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                
                break;
            }
            else if(nums[start]+nums[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
        return ans;
    }
};