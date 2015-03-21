/****************************************************************************\

    FileName: Wildcard_Matching.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015年03月20日 16:11:27

\****************************************************************************/
class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        if (s == NULL || p == NULL) {
            return false;
        }
        if (*s == '\0' && *p == '\0') {
            return true;
        }
        
        int n = 0;
        const char *pp = p;
        while (*pp != '\0') {
            if (*pp != '*') {
                n++;
            }
            pp++;
        }
        int m = 0;
        const char *ss = s;
        while (*ss != '\0') {
            m++;
            ss++;
        }

        return match(s, m, p, n);
    }

    bool match(const char *s, int m, const char *p, int n) {
        if (n > m) {
            return false;
        }
        if (*p == '\0' && *s == '\0') {
            return true;
        }
        if (*p == '\0') {
            return false;
        }
        if (*s == '\0') {
            if (n == 0) {
                return true;
            } else {
                return false;
            }
        }

        if (*p == '*') {
            while (*p == '*') {
                p++;
            }
            while(1) {
                if (n > m) {
                    break;
                }
                if (*p != '?' && *p != *s && *s != '\0' && *p != '\0') {
                    s++;
                    m--;
                    continue;
                }
                if (match(s, m, p, n)) {
                    return true;
                }
                if (*s == '\0') {
                    break;
                }
                s++;
                m--;
            }
        } else if (*p == '?') {
            while (*p == '?' && *s != '\0') {
                p++;
                s++;
                m--;
                n--;
            }
            return match(s, m, p, n);
        } else {
            if (*s == *p) {
                while(*s == *p && *p != '*' && *p != '?' && *s != '\0' && *p != '\0') {
                    s++;
                    p++;
                    m--;
                    n--;
                }
                return match(s, m, p, n);
            }
        }
        return false;
    }

};

