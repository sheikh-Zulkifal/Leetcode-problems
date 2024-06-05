class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mymap;
        for(int i=0;i<nums.size();i++){
            int remainder=target-nums[i];
            if(mymap.count(remainder)){
                return{i,mymap[remainder]};
            }
            mymap[nums[i]]=i;
        }
        return{-1,1};
    }
};

//         unordered_map<int, int> mp;
//         for (int i = 0; i < nums.size(); i++)
//             mp[nums[i]] = i;

//         for (int i = 0; i < nums.size(); i++) {
//             int x = target - nums[i];
//             if (mp.find(x) != mp.end()) {
//                 if (mp[x] != i)
//                     return {mp[x], i};
//             }
//         }
//         return {};
//     };
// };
// for (int i = 0; i < nums.size(); i++) {
//     for (int j = i + 1; j < nums.size(); j++) {
//         if (nums[i] + nums[j] == target) {
//             return {i, j};
//         };
//     };
// };
// return {};