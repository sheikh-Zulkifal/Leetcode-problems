class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> result;
        int n = nums.size();

        // Step 1: for each index check if it's k-distant from any key
        for (int i = 0; i < n; i++) {
            for (int j = max(0, i - k); j <= min(n - 1, i + k); j++) {
                if (nums[j] == key) {
                    result.push_back(i);
                    break; // found at least one valid j
                }
            }
        }

        return result;
    }
};
