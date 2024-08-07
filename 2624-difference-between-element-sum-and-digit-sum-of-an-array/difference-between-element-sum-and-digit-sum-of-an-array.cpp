class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eSum = 0, dSum = 0;
        for (auto num : nums) {
            eSum += num;
            int temp = num;
            while (temp > 0) {
                dSum += temp % 10;
                temp /= 10;
            }
        }
        return abs(eSum - dSum);
    }
};
