class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         int n = s.length();

        // Try all possible lengths from 1 to n/2
        for (int i = 1; i <= n / 2; i++) {
            // Length must divide the total length evenly
            if (n % i == 0) {
                string pattern = s.substr(0, i); // candidate substring
                string repeated = "";

                // Repeat the pattern n / len times
                for (int j = 0; j < n / i; j++) {
                    repeated += pattern;
                }

                // Check if the repeated string matches the original
                if (repeated == s) return true;
            }
        }

        return false; // No pattern found
    }
};