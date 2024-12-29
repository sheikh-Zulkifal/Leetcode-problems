class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res =0;
        unordered_set<int> mySet(nums.begin(), nums.end());
        for(auto num: mySet){
            if(mySet.find(num-1) == mySet.end()){
               int streak = 1;
                int curr = num;

                while(mySet.find(curr + 1) != mySet.end()){
                    streak++;
                    curr++;
                }
              res = max(res, streak);
            }

        }
        return res;
    }
};