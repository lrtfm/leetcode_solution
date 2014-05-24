/****************************************************************************\

    FileName: Longest_Palindromic_Substring.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月23日 21:56:19

\****************************************************************************/

#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        size_t len = s.size();
        if (len <= 1) { return s; }

        bool f = false;
        string ret = s.substr(0, 1);
        for (size_t i = 0; i < len; ++i) {
            size_t found = s.substr(i).find_last_of(s[i]);
            while (found != 0) { 
                f = true;
                for (size_t j = 0; j < (found + 1)/2; ++j) {
                    if (s[i + j] == s[i + found - j]) {
                        continue;
                    } else {
                        f = false; 
                    }
                }
                if (f == true && found + 1 > ret.size() ) {
                    ret = s.substr(i, found + 1);
                    break;
                }
                found = s.substr(i, found).find_last_of(s[i]);
            }
        }
        return ret;
    }
};
