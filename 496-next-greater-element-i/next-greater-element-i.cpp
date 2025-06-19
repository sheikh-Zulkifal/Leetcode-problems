class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;

        for (int i = 0; i < nums2.size(); i++) {
            int nextGreater = -1;

            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    nextGreater = nums2[j];
                    break;
                }
            }
            mp[nums2[i]] = nextGreater;
        }

        for (auto num : nums1) {
            ans.push_back(mp[num]);
        }

        return ans;
    }
};