class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        
        // Helper function to solve the simple house robber problem for a linear street
        auto simpleRob = [](vector<int>& houses) -> int {
            int rob1 = 0, rob2 = 0;
            for (auto n : houses) {
                int newRob = max(rob1 + n, rob2);
                rob1 = rob2;
                rob2 = newRob;
            }
            return rob2;
        };
        
        // Rob houses excluding the first or excluding the last
        vector<int> nums1(nums.begin(), nums.end() - 1); // exclude the last house
        vector<int> nums2(nums.begin() + 1, nums.end()); // exclude the first house
        
        return max(simpleRob(nums1), simpleRob(nums2));
    }
};
