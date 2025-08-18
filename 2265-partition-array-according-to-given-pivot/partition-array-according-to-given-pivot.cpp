class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> res(n);
        
        int left = 0;   // where to place < pivot
        int countPivot = 0;

        // First pass: handle < pivot and count pivots
        for (int num : nums) {
            if (num < pivot) {
                res[left++] = num;
            } else if (num == pivot) {
                countPivot++;
            }
        }

        // Place pivots in the middle
        for (int i = 0; i < countPivot; i++) {
            res[left++] = pivot;
        }

        // Second pass: handle > pivot in correct order
        for (int num : nums) {
            if (num > pivot) {
                res[left++] = num;
            }
        }

        return res;
    }
};

