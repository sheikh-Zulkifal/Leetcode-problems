class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if (n == 0 || s[0] == '0') return 0; // Edge case: if the string is empty or starts with '0'

        vector<int> dp(n + 1, 0);  // dp[i] represents the number of ways to decode the string up to index i
        dp[0] = 1;  // There's one way to decode an empty string
        
        // Initialize for the first character
        dp[1] = s[0] != '0' ? 1 : 0;

        // Fill the dp array
        for (int i = 2; i <= n; i++) {
            int oneDigit = stoi(s.substr(i - 1, 1)); // The single character at index i-1
            int twoDigits = stoi(s.substr(i - 2, 2)); // The two characters ending at index i-1

            if (oneDigit >= 1 && oneDigit <= 9) {
                dp[i] += dp[i - 1];  // One-digit valid decode
            }

            if (twoDigits >= 10 && twoDigits <= 26) {
                dp[i] += dp[i - 2];  // Two-digit valid decode
            }
        }

        return dp[n];  // The total number of ways to decode the entire string
    }
};
