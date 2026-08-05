class Solution {
public:
    void Sum(int index,vector<int>candidates,int target,vector<vector<int>>& ans, vector<int>& curr){
        if(target ==0){
        ans.push_back(curr);    
        return;}

        if(index== candidates.size() ||target<0)
        return;

        curr.push_back(candidates[index]);
        Sum(index,candidates,target-candidates[index],ans,curr);
        curr.pop_back();

        Sum(index+1,candidates,target,ans,curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;

        Sum(0,candidates,target,ans,curr);
        return ans;
    }
};