class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        for (auto a : heights)
            expected.push_back(a);

        sort(expected.begin(), expected.end());
        int count=0;
        for (int i = 0; i < heights.size(); i++) {
            if (expected[i] != heights[i])
                count++;
        }
        return count;
    }
};