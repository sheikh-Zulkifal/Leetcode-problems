class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> sortedScores = score; // Copy of the original scores
        unordered_map<int, int> scoreIndexMap; // Map to store the index of each score
        
        // Fill the map with the original indexes of the scores
        for (int i = 0; i < n; ++i) {
            scoreIndexMap[score[i]] = i;
        }
        
        // Sort the scores in descending order
        sort(sortedScores.begin(), sortedScores.end(), greater<int>());
        
        // Vector to store the result
        vector<string> result(n);
        
        // Assign the appropriate ranks
        for (int i = 0; i < n; ++i) {
            int originalIndex = scoreIndexMap[sortedScores[i]];
            if (i == 0) {
                result[originalIndex] = "Gold Medal";
            } else if (i == 1) {
                result[originalIndex] = "Silver Medal";
            } else if (i == 2) {
                result[originalIndex] = "Bronze Medal";
            } else {
                result[originalIndex] = to_string(i + 1);
            }
        }
        
        return result;
    }
};