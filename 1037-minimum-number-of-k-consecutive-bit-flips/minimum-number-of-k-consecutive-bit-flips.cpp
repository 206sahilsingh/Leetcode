class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        deque<int>q;
        int flip=0,n=nums.size();

        for(int i=0;i<n;i++){
            if(!q.empty() && q.front()<i)
                q.pop_front();

            if(q.size()%2==nums[i]){
                if(i+k-1>=n)
                    return -1;

                q.push_back(i+k-1);
                flip++;            }
        }
        return flip;
    }
};