class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       vector<int>ans;
       sort(nums.begin(),nums.end());
       for(int i=0; i<nums.size()-1;i++){
        int p=nums[i], q=nums[i+1];
        if(q-p >1){
            while(q-p>1){
            ans.push_back(p+1);
            p++;}
        }
       }
       return ans;
    }
};