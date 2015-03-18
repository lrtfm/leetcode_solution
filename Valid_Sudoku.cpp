/****************************************************************************\

    FileName: Valid_Sudoku.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ16ÈÕ 13:40:54

\****************************************************************************/
class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        int n = 9;
        for (int i = 0; i < n; ++i) {
            set<char> r;
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == '.') {
                    continue;
                } else if (r.find(board[i][j]) != r.end()) {
                    return false;
                } else {
                    r.insert(board[i][j]);
                }
            }
            set<char> c;
            for (int j = 0; j < n; ++j) {
                if (board[j][i] == '.') {
                    continue;
                } else if (c.find(board[j][i]) != c.end()) {
                    return false;
                } else {
                    c.insert(board[j][i]);
                }
            }
            set<char> b;
            int row = (i/3) * 3;
            int col = (i%3) * 3;
            for (int j = 0; j < n; ++j) {
                char tmp = board[row + (i/3) * 3][col + (i%3) * 3];
                if (tmp == '.') {
                    continue;
                } else if (b.find(tmp) != b.end()) {
                    return false;
                } else {
                    b.insert(tmp);
                }
            }
        }

        return true;
    }

};
