class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> less;
        vector<int> mid;
        vector<int> greater;
        vector<int> res;
        for (auto num : nums) {
            if (num < pivot) {
                less.push_back(num);
            } else if (num == pivot) {
                mid.push_back(num);

            } else {
                greater.push_back(num);
            }
        }
        res.insert(res.end(), less.begin(), less.end());
        res.insert(res.end(), mid.begin(), mid.end());
        res.insert(res.end(), greater.begin(), greater.end());
        return res;
    }
};