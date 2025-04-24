class Solution {
public:
    vector<vector<string>> result;
    int N;
    unordered_set<int> cols;
    unordered_set<int> diag;
    unordered_set<int> antiDia;

   
    void solve(vector<string>& board, int row) {
        if (row == N) {
            result.push_back(board);
            return;
        }
        for (int col = 0; col < N; col++) {
            int diagConstants = row+col;
            int antiDiaConstants = row-col;

            if(cols.find(col) != cols.end() || diag.find(diagConstants) != diag.end() || antiDia.find(antiDiaConstants) != antiDia.end() ){
                continue;
            }
            // for a given [row][col] = 'Q'
            cols.insert(col);
            diag.insert(diagConstants);
            antiDia.insert(antiDiaConstants);
            board[row][col] = 'Q';

            solve(board, row+1);

            cols.erase(col);
            diag.erase(diagConstants);
            antiDia.erase(antiDiaConstants);
            board[row][col] = '.';
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        N = n;
        vector<string> board(n, string(n, '.'));
        solve(board, 0); // start from row 0
        return result;
    }
};