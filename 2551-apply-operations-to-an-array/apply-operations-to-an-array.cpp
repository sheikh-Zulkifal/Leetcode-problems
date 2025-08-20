class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i = 0, j = 1, n = nums.size();
        while (i < n && j < n) {
            if (nums[i] == nums[j]) {
                nums[i] = nums[i] * 2;
                nums[j] = 0;
            }
            i++;
            j++;
        }
        int k=0;
        for(int x=0; x<n; x++){
            if(nums[x] != 0){
                nums[k] = nums[x];
                k++;
            }
        }
        while(k < n){
            nums[k] = 0;
            k++;
        }


        return nums;
    }
};