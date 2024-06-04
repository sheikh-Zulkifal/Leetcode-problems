class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums1set(nums1.begin(), nums1.end());
        unordered_set<int> nums2set(nums2.begin(), nums2.end());

        vector<int> ans_zero;

        for(auto n:nums1set){
            if(!nums2set.count(n)){
                ans_zero.push_back(n);
            }
        }
        vector<int> ans_one;
        for(auto n:nums2set){
            if(!nums1set.count(n)){
                ans_one.push_back(n);
            }
        }
        return{ans_zero, ans_one};
        
    }
};