void mergeElements(vector<int>& array, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int k = l;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++) {
        L[i] = array[k];
        k++;
    }
    for (int i = 0; i < n2; i++) {
        R[i] = array[k];
        k++;
    }
    int i = 0, j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int>& array, int l, int r) {
    if (l >= r)
        return;
    int m = l + (r - l) / 2;
    mergeSort(array, l, m);
    mergeSort(array, m + 1, r);
    mergeElements(array, l, m, r);
}

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};