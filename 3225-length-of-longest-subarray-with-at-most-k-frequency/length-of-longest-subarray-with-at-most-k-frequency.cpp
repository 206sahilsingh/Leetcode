class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
      unordered_map<int,int> mp;
        int length=0;
        int j=0;
      for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
        while(mp[nums[i]]>k){
            mp[nums[j]]--;
            j++;

        }
            length =max(length,i-j+1);
      }
            return length;
    }
};