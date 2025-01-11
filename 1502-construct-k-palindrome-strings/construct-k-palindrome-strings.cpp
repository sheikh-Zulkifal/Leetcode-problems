class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) return false;
        unordered_map<char , int> mp;
        for(auto c:s){
            mp[c]++;
        }
        int oddCount =0;
        for( auto pair : mp){
            if(pair.second % 2 != 0){
                oddCount++; 
            }
        }
        return oddCount <= k ; 
    }
};