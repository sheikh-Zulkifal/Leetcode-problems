class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> myMp;
        for(int i=0;i<names.size();i++){
            myMp[heights[i]] = names[i];
        }
        vector<string>ans;
        for(auto m:myMp){
            ans.push_back(m.second);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};