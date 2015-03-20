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

        if (*p == '*') {
            while(1) {
                if(match(s, p+1)) {
                    return true;
                }
                if (s == '\0') {
                    break;
                }
                s++;
            }
        } else if (*p == '?') {
            return match(s+1, p+1);
        } else {
            if (*s == *p) {
                return match(s+1, p+1);
            }
        }
        return false;
    }

};
