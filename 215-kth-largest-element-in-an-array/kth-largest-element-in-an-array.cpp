class Solution {
public:
    // Partition the array so that all elements less than pivot go to the left
    int partition(vector<int>& nums, int left, int right) {
        int pivot = nums[right]; // Choose pivot as the last element
        int storeIndex = left;

        for (int i = left; i < right; i++) {
            if (nums[i] < pivot) { // '<' because we're doing ascending sort
                swap(nums[i], nums[storeIndex]);
                storeIndex++;
            }
        }

        // Put pivot in its correct position
        swap(nums[storeIndex], nums[right]);
        return storeIndex;
    }

    // Quickselect to find the kth smallest element
    int quickSelect(vector<int>& nums, int left, int right, int targetIndex) {
        int pivotIndex = partition(nums, left, right);

        if (pivotIndex == targetIndex) {
            return nums[pivotIndex];
        } else if (pivotIndex < targetIndex) {
            return quickSelect(nums, pivotIndex + 1, right, targetIndex);
        } else {
            return quickSelect(nums, left, pivotIndex - 1, targetIndex);
        }
    }

    // Main function to find the kth largest using ascending logic
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int targetIndex = n - k; // kth largest is at index n - k in ascending order
        return quickSelect(nums, 0, n - 1, targetIndex);
    }
};
