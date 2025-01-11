class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int targetRow= -1;
        for(int i =0 ;i<matrix.size();i++ ){
            int currentSize = matrix[i].size() -1;
            if(matrix[i][0] <= target && matrix[i][currentSize]>= target){
               targetRow = i;
                break;
            };            
        }
        if(targetRow == -1) return false;
        int left = 0;
        int right = matrix[targetRow].size() -1;
        while(left <= right){
            int mid = (left+right)/2;
            if(matrix[targetRow][mid] == target )
            return true;
            else if(matrix[targetRow][mid] < target )
                left = mid + 1;
            else if( matrix[targetRow][mid] > target)
                right = mid - 1;
        }
        return false;
    }
};