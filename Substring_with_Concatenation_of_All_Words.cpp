/****************************************************************************\

    FileName: Substring_with_Concatenation_of_All_Words.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年10月24日  0:01:27

\****************************************************************************/
class Solution {
public:
    vector<int> findSubstring(string S, vector<string> &L) { 
        vector<int> ret;
        if (L.empty() || S.empty()) {
            return ret;
        }

        int n = L.size();
        int m = S.size();
        int len = L[0].size();
        int max = m - n * len;
        if (max < 0) {
            return ret;
        }

        map<string, int> source;
        for (int i = 0; i < n; ++i) {
            if (source.find(L[i]) != source.end()) {
                source[L[i]] += 1;
            } else {
                // source[L[i]] == 1;
                source.insert(std::pair<string, int>(L[i], 1));
            }
        }

        for (int i = 0; i <= max; ++i) {
            map<string, int> target = source;
            int j;
            for (j = 0; j < n; ++j) {
                string tmp = S.substr(i + j * len, len);
                if (target.find(tmp) == source.end() || target[tmp] < 1) {
                    break;
                } else {
                    target[tmp] -= 1;
                }
            }
            if (j == n) {
                ret.push_back(i);
            }
        }
        
        return ret;
    }


};
