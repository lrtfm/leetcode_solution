/****************************************************************************\
 
    FileName: 3Sum_Closest.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: Mon May 26 23:28:20 CST 2014

\****************************************************************************/
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        size_t len = num.size();
        int ret = 0;
        if (len < 3) {
            return ret;
        }
        
        sort(num.begin(), num.end());
        int d;
        vector<int> tmp(num.begin(), num.begin() + 3);
        ret = tmp[0] + tmp[1] + tmp[2];
        d = (ret > target) ? ret - target : target - ret;
        
        for (size_t i = 0; i < len - 2 && num[i] <= 0; ++i) {
            if (i != 0) {
                if (tmp[0] == num[i]) {
                    continue;
                }
            }
            tmp[0] = num[i];
            for (size_t j = i + 1; j < len - 1; ++j ) {
                if (j != i + 1) {
                    if (tmp[1] == num[j]) {
                        continue;
                    }
                }
                tmp[1] = num[j];
                int psum = target - num[i] - num[j];
                if (psum < num[j] + d) {
                    break;
                }
                for (size_t k = j + 1; k < len; ++k) {
                    if (k != j + 1) {
                        if (tmp[2] == num[k]) {
                            continue;
                        }
                    }
                    tmp[2] = num[k];
                    int dtmp = psum - num[k];
                    
                    if (dtmp <= -d) {
                        break;
                    } else if (dtmp >= d) {
                        continue;
                    } else {
                        d = (dtmp > 0) ? dtmp : -dtmp;
                        ret = target - dtmp;
                    }
                    if (d == 0) {
                        return ret;
                    }
                }
                if (num[i] >= d && num[j] >= d) {
                    break;
                } 
            }
            if (num[i] >= d) {
                break;
            }
        }
        return ret;
    }
};
