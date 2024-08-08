class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum_T = 0;
        int sum_S = 0;
        for (auto c : s)
            sum_S += static_cast<int>(c);
        for (auto c : t)
            sum_T += static_cast<int>(c);
        return char(sum_T - sum_S);
    }
};
