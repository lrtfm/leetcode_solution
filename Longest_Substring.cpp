/****************************************************************************
    FileName: Longest_Substring.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月23日 16:40:38

\****************************************************************************/

#include  <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        size_t len = s.size();

        if ( len <= 1) 
        {
            return len;
        }

        size_t ret = 1;
        size_t tmp = 1;
        size_t b = 0;
        for (size_t i = 1; i < len; i++)
        {
            size_t match = s.substr(b, i - b).find_last_of(s[i]);
            if (match == string::npos) {
                tmp++;
                continue;
            }
            else
            {
                b = b + match + 1;
                ret = (tmp > ret)? tmp : ret;
                tmp = i - b + 1;
            }
        }

        ret = (tmp > ret)? tmp : ret;
        return ret; 
    }
};
