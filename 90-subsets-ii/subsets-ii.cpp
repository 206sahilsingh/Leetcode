class Solution {
public:
    void subset(vector<int>nums,vector<vector<int>>&ans, vector<int>&curr,int index){
        if(index==nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        subset(nums,ans,curr,index+1);

        while(index+1<nums.size() &&nums[index]==nums[index+1])
            index++;

        curr.pop_back();
        subset(nums,ans,curr,index+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>curr;

        subset(nums,ans,curr,0);
        return ans;
    }
};