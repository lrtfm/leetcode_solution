/****************************************************************************\

    FileName: Longest_Valid_Parentheses.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ15ÈÕ 17:33:25

\****************************************************************************/
class Solution {
public:
    int longestValidParentheses(string s) {
        int num = 0;
        int n = s.size();
        int curr = 0;
        int left = 0;
        // vector<int> index;
        vector<int> cpnum;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '(') {
                left++;
                // index.push_back(i);
                cpnum.push_back(curr);
            } else {
                if (left > 0) {
                    left--;
                    // index.pop_back();
                    cpnum.pop_back();
                    curr++;
                } else {
                    if (curr > num) num = curr;
                    // index.resize(0);
                    cpnum.resize(0);
                    curr = 0;
                    left = 0;
                }
            }
        }

        for (int i = left - 1; i >= 0; i--) {
            int tmp = curr - cpnum[i];
            if (tmp > num) num = tmp;
            curr = cpnum[i];
        }

        if (curr > num) num = curr;
        return 2*num;
    }

};
