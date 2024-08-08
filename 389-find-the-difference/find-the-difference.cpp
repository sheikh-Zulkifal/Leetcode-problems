class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> freqMap;

        for (char c : t) {
            freqMap[c]++;
        }

        for (char c : s) {
            freqMap[c]--;
            if (freqMap[c] == 0) {
                freqMap.erase(c);
            }
        }
        for (auto pair : freqMap) {
            return pair.first;
        }
         return '\0';
    }
};
