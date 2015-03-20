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

        return match(s, p);
    }

    bool match(const char *s, const char *p) {
        if (*p == '\0' && *s == '\0') {
            return true;
        }
        if (*p == '\0') {
            return false;
        }
        if (*s == '\0') {
            while (*p == '*') {
                p++;
            }
            if (*p == '0') {
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
                if (*p != '?' && *p != *s && *s != '\0' && *p != '\0') {
                    s++;
                    continue;
                }
                const char * t = p;
                while(*s == *t && *t != '*' && *t != '?' && *s != '\0' && *t != '\0') {
                    s++;
                    t++;
                }
                if(match(s, t)) {
                    return true;
                }
                if (*s == '\0') {
                    break;
                }
                s++;
            }
        } else if (*p == '?') {
            while (*p == '?' && *s != '\0') {
                p++;
                s++;
            }
            return match(s, p);
        } else {
            if (*s == *p) {
                while(*s == *p && *p != '*' && *p != '?' && *s != '\0' && *p != '\0') {
                    s++;
                    p++;
                }
                return match(s, p);
            }
        }
        return false;
    }

};
