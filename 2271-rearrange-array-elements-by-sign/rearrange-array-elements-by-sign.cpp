class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> pos;
        vector<int> neg;

        for (auto n : nums) {
            if (n > 0) {
                pos.push_back(n);

            } else {
                neg.push_back(n);
            }
        }
        int i=0;
        while(2*i < n){
            nums[2*i] = pos[i];
            nums[2*i+1]=neg[i];
            i++;

        }
        return nums;
    }
};