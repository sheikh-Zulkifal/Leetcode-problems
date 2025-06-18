class Solution {
public:
    int M = 1e9+7;
    int numberOfGoodPartitions(vector<int>& nums) {
        int n= nums.size();
        int result = 1;
        unordered_map <int, int> last_index; // number -> last index
        for(int i = 0;i<n;i++)
            last_index[nums[i]] = i;
        int i = 0, j =0; 
         j = max(j, last_index[nums[i]]);

        while(i<n){
            if(i>j){
                result = (result * 2) % M;
            }
            j = max(j, last_index[nums[i]]);
            i++;
        }
        return result;

    }
};