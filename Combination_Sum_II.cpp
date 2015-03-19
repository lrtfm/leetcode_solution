/****************************************************************************\

    FileName: Combination_Sum_II.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ18ÈÕ 21:18:08

\****************************************************************************/
class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int> &candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int n = candidates.size();
        vector<vector<int> > ret;
        inner(candidates, n, target, ret);
        return ret;
    }

    bool inner(vector<int> &candidates, int n, int target, vector<vector<int> > & ret) {
        if (target == 0) {
            return true;
        }

        while (n > 0 && candidates[n - 1] > target) {
            n--;
        }

        if (n == 0) {
            return false;
        }

        int curr = candidates[n - 1];
        int i = 0;
        while (n > 0 && curr == candidates[n - 1]) {
            i++;
            n--;
        }
        if (target/curr < i) {
            i = target/curr;
        }

        vector<vector<int> > tmp;
        while (i >= 0) {
            tmp.resize(0);
            if (inner(candidates, n, target - i*curr, tmp)) {
                if (tmp.size() == 0) {
                    ret.push_back(vector<int>(i, curr)); // i != 0
                } else {
                    for (int j = 0; j < tmp.size(); ++j) {
                        // ret[j].reserve(ret[j].size() + i);
                        for(int k = 0; k < i; ++k) {
                            tmp[j].push_back(curr);
                        }
                        ret.push_back(tmp[j]);
                    }
                }
            }
            i--;
        }

        return (ret.size() != 0);
    }

};
