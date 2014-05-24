/****************************************************************************\

    FileName: String_to_Integer.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 12:22:19

\****************************************************************************/

#include <cstring>

class Solution {
public:
    int atoi(const char *str) {
        if (str == NULL) return 0;

        const char *p = str;
        while( *p != '\0' && (*p == ' ' || *p == '\t' || *p == '\n') ) { p++; }
        if (*p == '\0') return 0;

        bool neg_flag = false;
        if (*p == '+') {
            neg_flag = false;
            p++;
        }
        else if (*p == '-') {
            neg_flag = true;
            p++;
        }

        if (*p == '\0') return 0;

        char* max = "2147483647";
        char* max2 = "2147483648";
        const char *start = p;
        int ret = 0;

        while (*p != '\0' && *p >= '0' && *p <= '9') {
            ret = ret * 10 + ( *p - '0');
            p++;
        }
        int len = p - start;
        int max_len = strlen(max);
        if (len > max_len ) {
            if (neg_flag) return -2147483648;
            else return 2147483647;
        }
        else if (len == max_len) {
            if (neg_flag && strncmp(start, max2, len) >= 0) return -2147483648;
            else if (!neg_flag && strncmp(start, max, len) >= 0) return 2147483647;
        }

        if (neg_flag) return -ret;
        return ret;
    }
};
