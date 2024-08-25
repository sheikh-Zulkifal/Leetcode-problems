class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, maxFreq = 0, res = 0;
        unordered_map<char, int> count;

        for (int right = 0; right < s.size(); right++) {
            count[s[right]]++;
            maxFreq = max(maxFreq, count[s[right]]);
            
            // Check if the current window is valid
            if ((right - left + 1) - maxFreq > k) {
                count[s[left]]--;
                left++;
            }

            // Update the result with the maximum valid window size
            res = max(res, right - left + 1);
        }

        return res;
    }
};
