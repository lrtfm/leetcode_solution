/****************************************************************************\
    FileName: Sum4.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: Tue May 27 12:14:55 CST 2014
\****************************************************************************/
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        size_t len = num.size();
        vector< vector<int> > ret;
        if (len < 4) {
            return ret;
        }
        
        sort(num.begin(), num.end());
        vector<int> tmp(4, 0);
        for (size_t i = 0; i < len - 3 && num[i] <= target / 4; ++i) {
            if (i != 0) {
                if (tmp[0] == num[i]) {
                    continue;
                }
            }
            tmp[0] = num[i];
            for (size_t j = i + 1; j < len - 2; ++j ) {
                if (j != i + 1) {
                    if (tmp[1] == num[j]) {
                        continue;
                    }
                }
                tmp[1] = num[j];
                int psum = target - num[i] - num[j];
                if (psum/2 < num[j]) {
                    break;
                }
                size_t k = j + 1;
                size_t l = len - 1;
                bool k_flag = false;
                bool l_flag = false;
                while (k < l && num[k] <= psum/2 && num[l] >= psum/2) {
                    if (k_flag && tmp[2] == num[k]) {
                        k++;
                        continue;
                    }
                    if (l_flag && tmp[3] == num[l]) {
                        l--;
                        continue;
                        
                    }
                    tmp[2] = num[k];
                    tmp[3] = num[l];
                    int tsum = num[l] + num[k];
                    if ( tsum == psum) {
                        ret.push_back(tmp);
                        k++;
                        l--;
                        k_flag = true;
                        l_flag = true;
                    } else if(tsum < psum) {
                        k++;
                        k_flag = true;
                        l_flag = false;
                    } else {
                        l--;
                        l_flag = true;
                        k_flag = false;
                    }
                }
            }
        }
        return ret;
    }
};
