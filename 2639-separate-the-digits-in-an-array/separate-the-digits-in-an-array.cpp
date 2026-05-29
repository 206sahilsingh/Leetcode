class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;

        for(int i=0; i<nums.size(); i++){
            int digit=0;
        
            if(nums[i]>=10){
                vector<int> temp;
               while(nums[i]>0){
               digit = nums[i]%10;
               temp.push_back(digit);
                nums[i] = nums[i]/10;
                }
                reverse(temp.begin(), temp.end());
                for(int j=0; j<temp.size();j++){
                    answer.push_back(temp[j]);
                }

            }

            else{
                answer.push_back(nums[i]);
            }
        }
        return answer;
    }
};