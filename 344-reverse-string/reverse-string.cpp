class Solution {
public:
    void reverseHelper(vector<char>& s, int left, int right) {
        if (left >= right) return; // base case: when pointers cross or meet
        swap(s[left], s[right]);   // swap characters
        reverseHelper(s, left + 1, right - 1); // recursive call
    }

    void reverseString(vector<char>& s) {
        reverseHelper(s, 0, s.size() - 1);
    }
};
