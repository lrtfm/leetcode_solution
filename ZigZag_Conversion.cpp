/****************************************************************************\

    FileName: ZigZag_Conversion.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 11:34:33

\****************************************************************************/

#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int nRows) {
        size_t len = s.size();
        if (len <= nRows || nRows <= 1) return s;
        //if (len <= nRows) return s;

        string ret = s;
        size_t j = 0;
        size_t tmp = 0;

        for (size_t i = 0; i < nRows; ++i) {
            size_t k = i;
            ret[j++] = s[k];
            size_t s1 = 2*(nRows - 1 - i);
            size_t s2 = 2*i;
            while (k < len) {
                k = k + s1;
                if (s1 != 0 & k < len) {
                    ret[j++] = s[k];
                }
                k = k + s2;
                if (s2 != 0 & k < len) {
                    ret[j++] = s[k];
                }
            }
        }
        return ret;
    }
};
