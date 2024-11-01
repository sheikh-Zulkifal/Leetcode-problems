#include <vector>
#include <algorithm>
#include <limits.h>

class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        long long maxSub = nums[0];
        long long curMax = nums[0];
        long long curMin = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            long long tempMax = std::max({(long long)nums[i], curMax * nums[i], curMin * nums[i]});
            curMin = std::min({(long long)nums[i], curMax * nums[i], curMin * nums[i]});
            curMax = tempMax;
            maxSub = std::max(maxSub, curMax);
        }
        
        return static_cast<int>(maxSub);
    }
};
