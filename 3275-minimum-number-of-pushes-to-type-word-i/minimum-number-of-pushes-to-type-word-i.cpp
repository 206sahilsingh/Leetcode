class Solution {
public:
    int minimumPushes(string word) {
      int ans=0;
      unordered_map<char, int>mp;

      for(char ch: word){
        mp[ch]++;
      }
        vector<int>count;
        for(auto it: mp){
            count.push_back(it.second);
        }
        sort(count.begin(),count.end(),greater<int>());

        for(int i=0; i<count.size();i++){
            ans +=count[i]*(i/8 +1);
        }
        return ans;

    }
};