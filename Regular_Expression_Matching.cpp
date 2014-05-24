/****************************************************************************\

    FileName: Regular_Expression_Matching.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 19:05:39

\****************************************************************************/
class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        if (p == NULL || s == NULL) {
            return false;
        }

        if (*s == '\0' || *p == '\0') {
            return *s == *p;
        }

        if (*(p+1) != '*') {
            if ( *p == *s || *p == '.' ) {
                return isMatch(s + 1, p + 1);
            }
            return false;
        } else {
            while ( *s != '\0' && (*p == *s || *p == '.')) {
                if (isMatch(s, p + 2)) {
                    return true;
                } 
                s++;
            } 
            return isMatch(s, p + 2);
        }

        return false;
    }
};
