class Solution {
public:
    int lengthOfLongestSubstring(string s) { // abcabcbb
        set<char> mySet;
        int left = 0; // 
        int result = 0;
        for (int right = 0; right < s.size(); right++) { //s[right] = a
            while (mySet.find(s[right]) != mySet.end()) { // f 
                mySet.erase(s[left]);// 
                left++;// 1
            }
            mySet.insert(s[right]);//    a b c
            result = max(result, right - left + 1); // 3,5-3+1 = 3
        }
        return result;
    }
};