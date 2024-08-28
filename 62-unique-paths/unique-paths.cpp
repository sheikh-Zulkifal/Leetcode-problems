class Solution {
public:
    vector<vector<int>> memo; // Memoization table
    
    int uniquePaths(int m, int n) {
        // Initialize the memo table with -1 (indicating uncomputed results)
        memo = vector<vector<int>>(m, vector<int>(n, -1));
        return calculatePaths(m - 1, n - 1);
    }
    
    int calculatePaths(int m, int n) {
        // Base cases: only one path if at the top-left corner
        if (m == 0 && n == 0)
            return 1;
        // Out of bounds cases
        if (m < 0 || n < 0)
            return 0;
        
        // If already computed, return the stored value
        if (memo[m][n] != -1)
            return memo[m][n];
        
        // Recursively calculate paths and store the result
        memo[m][n] = calculatePaths(m - 1, n) + calculatePaths(m, n - 1);
        
        return memo[m][n];
    }
};
