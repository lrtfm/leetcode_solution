/****************************************************************************\

    FileName: Sudoku_Solver.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ17ÈÕ 22:49:35

\****************************************************************************/
class Solution {
public:
    void solveSudoku(vector<vector<char> > &board) {

        int n = 9;
        char str[] = "123456789";
        set<char> all(str, str + n);
        vector<set<char> > r(n), c(n), b(n);
        int blank = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] != '.') {
                    r[i].insert(board[i][j]);
                    c[j].insert(board[i][j]);
                    b[i/3*3 + j/3].insert(board[i][j]);
                } else {
                    blank++;
                }
            }
        }

        vector<char> tmp(n);
        vector<char> option(n);
        vector<char>::iterator it;
        map<int, set<char> > optionMap;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == '.') {
                    it = set_union(r[i].begin(), r[i].end(),  
                            c[j].begin(), c[j].end(), 
                            tmp.begin());
                    it = set_union(tmp.begin(), it,  
                            b[i/3*3 + j/3].begin(), b[i/3*3 + j/3].end(),
                            option.begin());
                    it = set_difference(all.begin(), all.end(), 
                            option.begin(), it,
                            tmp.begin());
                    // optionMap[i*n + j] = set<char>(tmp.begin(), it);
                    optionMap.insert(
                            std::pair<int, set<char> >(
                                i*n+j, set<char>(tmp.begin(), it)));
                }
            }
        }

        bool ret = fillBlank(board, 0, optionMap);
    }

    bool fillBlank(vector<vector<char> > &board, int s, map<int, set<char> > &optionMap)
    {
        int n = 9;
        if (s >= n*n) {
            return true;
        }

        int i = s/n; 
        int j = s%n;
        set<char>::iterator it;
        if (board[i][j] == '.') {
            for (it = optionMap[s].begin(); it != optionMap[s].end(); ++it) {
                board[i][j] = *it;
                if (isValidSudoku(board, i, j)) {
                    if(fillBlank(board, s + 1, optionMap)) {
                        return true;
                    }
                }
            }
            board[i][j] = '.';
        } else {
            return fillBlank(board, s + 1, optionMap);
        }

        return false;
    }

    bool isValidSudoku(vector<vector<char> > &board, int i, int j) {
        int n = 9;
        set<char> r;
        for (int k = 0; k < n; ++k) {
            if (board[i][k] == '.') {
                continue;
            } else if (r.find(board[i][k]) != r.end()) {
                return false;
            } else {
                r.insert(board[i][k]);
            }
        }
        set<char> c;
        for (int k = 0; k < n; ++k) {
            if (board[k][j] == '.') {
                continue;
            } else if (c.find(board[k][j]) != c.end()) {
                return false;
            } else {
                c.insert(board[k][j]);
            }
        }
        set<char> b;
        int row = i - i%3;
        int col = j - j%3;
        for (int k = 0; k < n; ++k) {
            char tmp = board[row + k/3][col + k%3];
            if (tmp == '.') {
                continue;
            } else if (b.find(tmp) != b.end()) {
                return false;
            } else {
                b.insert(tmp);
            }
        }

        return true;
    }

};
