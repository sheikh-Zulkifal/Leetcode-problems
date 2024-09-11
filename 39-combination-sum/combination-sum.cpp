class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // Create a dp array where dp[i] stores all combinations summing to i
        vector<vector<vector<int>>> dp(target + 1);
        
        // Base case: there is one way to sum to 0, by picking nothing
        dp[0] = {{}};
        
        // Iterate over all candidates
        for (int candidate : candidates) {
            // For each candidate, update the dp table
            for (int i = candidate; i <= target; i++) {
                // For each combination that sums up to i - candidate, add the candidate
                for (auto combination : dp[i - candidate]) {
                    dp[i].push_back(combination);  // Add the current combination
                    dp[i].back().push_back(candidate);  // Include the current candidate
                }
            }
        }
        
        return dp[target];
    }
};
