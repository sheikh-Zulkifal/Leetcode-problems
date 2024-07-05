class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0;
        int right=0;
        int ans =0;
        set<char> myset;
        while(left<s.size() && right < s.size()){
            if(myset.count(s[right])){
                while(myset.count(s[right])){
                    myset.erase(s[left]);
                    left++;
                }
            }else{
                myset.insert(s[right]);
                int t=myset.size();
                ans = max(t,ans);
                right++;
            }
        }
        return ans;
    }
};