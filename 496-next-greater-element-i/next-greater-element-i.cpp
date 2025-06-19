class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;     // Stores next greater for each element in nums2
        stack<int> st;                  // Monotonic decreasing stack

        // Traverse nums2 from left to right
        for (int num : nums2) {
            // While the current number is greater than the top of the stack
            while (!st.empty() && num > st.top()) {
                mp[st.top()] = num;     // Current num is next greater for st.top()
                st.pop();
            }
            st.push(num);               // Push current number
        }

        // For elements that have no next greater, leave them as -1
        while (!st.empty()) {
            mp[st.top()] = -1;
            st.pop();
        }

        vector<int> ans;
        for (int num : nums1) {
            ans.push_back(mp[num]);     // Lookup from map
        }

        return ans;
    }
};
