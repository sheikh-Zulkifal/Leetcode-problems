class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        int result = 0;
        while (i < j) {
            int sum = nums[i] + nums[j];
            result = max(result, sum);
            i++;
            j--;
        }
        return result;
    }
};