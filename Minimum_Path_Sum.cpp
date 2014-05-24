/****************************************************************************\

    FileName: Minimum_Path_Sum.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 13:39:41

\****************************************************************************/

#include <vector>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        size_t m = grid.size();
        if (m == 0) return 0;

        size_t n = grid[0].size();
        if (n == 0) return 0;

        size_t i, j;
        for (i = 1; i < m; ++i) {
            grid[i][0] += grid[i-1][0];
        }
        for (i = 1; i < n; ++i) {
            grid[0][i] += grid[0][i-1];
        }
        for ( i = 1; i < m; ++i) {
            for (j = 1; j < n; ++j) {
                grid[i][j] += 
                    (grid[i-1][j] > grid[i][j-1]) ? \
                        grid[i][j-1] : grid[i-1][j];
            }
        }
        return grid[m-1][n-1];
    }
};


