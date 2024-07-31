class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res = "";
        int count = 0; // for ( paranthes
        for (auto c : s) {
            if (c == '(') {
                res.push_back(c);
                count++;
            } else if (c == ')' && count > 0) {
                res.push_back(c);
                count--;
            } else if (c != ')') {
                res.push_back(c);
            }
        }
        string filtered = "";
        reverse(res.begin(), res.end());
        for (auto c : res) {
            if (c == '(' && count > 0) {
                count--;
            } else {
                filtered.push_back(c);
            }
        }
        reverse(filtered.begin(), filtered.end());
        return filtered;
    }
};