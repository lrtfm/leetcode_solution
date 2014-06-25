/****************************************************************************\

    FileName: Generate_Parentheses.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: Sun Jun 22 00:04:20 CST 2014

\****************************************************************************/

class Solution {
public:

    vector<string> generateParenthesis(int n) {
        string str(2*n, ')');
        vector<string> ret;
        while (1) {
            if (isValid(str)) {
                ret.push_back(str);
            }
            if (!next(str)) {
                break;
            };
        }
        
        return ret;
    }
    
    bool isValid(string &s) {
        stack<char> cs;
        size_t len = s.size();
        
        for (size_t i = 0; i < len; ++i) {
            switch(s[i]) {
                case '(':
                    cs.push('(');
                    break;
                case ')':
                    if (!cs.empty() && cs.top() == '(') {
                        cs.pop();
                    } else {
                        return false;
                    }
                    break;
                default:
                    break;
            }
        }
        
        return cs.empty();
        
    }
    
    
    bool next(string & str) {
        int n = str.size();
        int c = 1;
        for (int i = n - 1; i >= 0; --i) {
            if (str[i] == ')') {
                str[i] = (c == 0) ? ')' : '(';
                c = 0;
                break;
            } else if (str[i] == '(' && c == 1) {
                str[i] = ')';
            } else {
                
                break;
            }
        }
        
        if (c == 1) {
            return false;
        }
        return true;
    }
};
