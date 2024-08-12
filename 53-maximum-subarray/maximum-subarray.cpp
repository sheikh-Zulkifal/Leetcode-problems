class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0];
        int curSum = 0;
        for(auto num: nums){
            if(curSum<0){
                curSum = 0;
            }
            curSum+=num;
            maxSub = max(maxSub , curSum);
        } 
        return maxSub;
    }
};