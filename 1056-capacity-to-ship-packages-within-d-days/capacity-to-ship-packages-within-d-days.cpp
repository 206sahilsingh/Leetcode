class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0,end=0,mid,ans;
        for(int i=0; i<weights.size(); i++){
            start=max(start,weights[i]);
            end += weights[i];
        }
        ans=end;
        while(start<=end){
            mid=start+(end-start)/2;
            int package=0, count=1;
            for(int i=0; i<weights.size();i++){
                if(package + weights[i]>mid){
                    count++;
                    package=weights[i];
                }
                else{
                    package+=weights[i];
                }
            }
            if(count<=days){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};