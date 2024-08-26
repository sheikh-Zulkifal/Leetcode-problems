class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> MP;
        
        // Iterate over each string in the input vector
        for(auto s : strs) {
            // Sort the string to use as a key
            string sorted_str = s;
            sort(sorted_str.begin(), sorted_str.end());
            
            // Group the original string by its sorted version
            MP[sorted_str].push_back(s);
        }
        
        // Prepare the result vector
        vector<vector<string>> result;
        
        // Iterate over the map and add each group of anagrams to the result
        for(auto& p : MP) {
            result.push_back(p.second);
        }
        
        return result;
    }
};
