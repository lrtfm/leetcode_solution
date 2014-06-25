/****************************************************************************\

    FileName: Valid_Parentheses.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: Sat Jun 14 23:52:07 CST 2014

\****************************************************************************/
#include "common.h"

class Solution {
public:
    bool isValid(string s) {
        stack<char> cs;
        size_t len = s.size();
        
        for (size_t i = 0; i < len; ++i) {
            switch(s[i]) {
                case '(':
                    cs.push('(');
                    break;
                case '[':
                    cs.push('[');
                    break;
                case '{':
                    cs.push('{');
                    break;
                case ')':
                    if (!cs.empty() && cs.top() == '(') {
                        cs.pop();
                    } else {
                        return false;
                    }
                    break;
               case ']':
                    if (!cs.empty() && cs.top() == ']') {
                        cs.pop();
                    } else {
                        return false;
                    }
                    break;
                case '}':
                    if (!cs.empty() && cs.top() == '}') {
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
};
