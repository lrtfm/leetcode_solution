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
        int num = 0;
        bool flag = false;
        while (blank > 0) {
            flag = false;
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (board[i][j] == '.') {
                        it = set_union(r[i].begin(), r[i].end(),  
                                c[j].begin(), c[j].end(), 
                                tmp.begin());
                        it = set_union(tmp.begin(), it,  
                                b[i/3*3 + j/3].begin(), b[i/3*3 + j/3].end(),
                                option.begin());
                        it = set_difference(option.begin(), it,
                                all.begin(), all.end(), 
                                tmp.begin());
                        num = it - tmp.begin();
                        if (num == 1) {
                            board[i][j] = *(tmp.begin());
                            r[i].insert(board[i][j]);
                            b[j].insert(board[i][j]);
                            b[i/3*3 + j/3].insert(board[i][j]);
                            blank--;
                            flag = true;
                        }
                    }
                }
            }
            if (flag == false) {
                // TODO
                break;
            }
        }


    }
};
