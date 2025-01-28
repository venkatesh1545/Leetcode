class Solution {
public:
    bool backtrack(vector<vector<char>> &board, string word, int i, int j, int ind) {
        if (ind == word.length()) {
            return true;
        }
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[ind]) {
            return false;
        }
        char temp = board[i][j];
        board[i][j] = '#';
        bool found = backtrack(board, word, i + 1, j, ind + 1) ||
                     backtrack(board, word, i - 1, j, ind + 1) ||
                     backtrack(board, word, i, j + 1, ind + 1) ||
                     backtrack(board, word, i, j - 1, ind + 1);
        board[i][j] = temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        if(m == 0) return false;
        int n = board[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(backtrack(board, word, i, j, 0))
                {
                    return true;
                }
            }
        }
        return false;
    }
};