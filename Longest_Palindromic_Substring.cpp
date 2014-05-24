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
        if (len <= 1) return s;

        int maxlen = 0;
        int start = 0;
        bool isPalindrome[len][len];
        for (size_t i = 0; i < len; i++) {
            isPalindrome[i][i] = true;
            if (i != 0) {
                isPalindrome[i][i - 1] = true;
            }
        }

        for (size_t k = 1; k < len; k++) {
            for (size_t i = 0; i < len - k; i++) {
                isPalindrome[i][i+k] = (
                        s[i] == s[i+k] && isPalindrome[i+1][i+k-1]);
                if (isPalindrome[i][i+k] && k > maxlen) {
                    start = i;
                    maxlen = k;
                }
            }
        }

        return s.substr(start, maxlen + 1);
    }
};
