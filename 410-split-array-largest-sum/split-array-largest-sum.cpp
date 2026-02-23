class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start = 0, end = 0;
        for (int i = 0; i < nums.size(); i++) {
            start = max(start, nums[i]); // largest single element
            end += nums[i];              // sum of all elements
        }

        int ans = end; // initialize with max possible sum

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int currSum = 0, count = 1;

            // Count how many subarrays needed if max sum is mid
            for (int i = 0; i < nums.size(); i++) {
                if (currSum + nums[i] > mid) {
                    count++;
                    currSum = nums[i];
                } else {
                    currSum += nums[i];
                }
            }

            if (count <= k) {
                ans = mid;      // valid split, try smaller max sum
                end = mid - 1;
            } else {
                start = mid + 1; // too many subarrays, increase limit
            }
        }

        return ans;
    }
};
