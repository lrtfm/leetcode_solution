/****************************************************************************\

    FileName: Regular_Expression_Matching.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 19:05:39

\****************************************************************************/
#include <cstring>

class Solution {
public:
    bool isMatch /* dp */ (const char *s, const char *p) {
        int len_s = strlen(s);
        int len_p = strlen(p);

        bool dp[len_p+1][len_s+1];
        memset(dp, false, (len_p+1)*(len_s+1)*sizeof(bool));
        dp[len_p][len_s] = true;
        //for (int j = len_s - 1; j >= 0; j--) {
        //    dp[len_p][j] = false;
        //}
        //for (int j = len_p - 1; j >= 0; j--) {
        //    dp[j][len_s] = false;
        //}
        for (int i = len_p - 1; i >=0; i--) {
            if (p[i] != '*') {
                break;
            }
            i--;
            //if (i < 0) { 
            //    break;
            //}
            dp[i][len_s] = true;
        }

        for (int i = len_s - 1; i >= 0; i--) {
            for (int k = len_p - 1; k >= 0; k--) {
                if (p[k] != '*') {
                    dp[k][i] = dp[k+1][i+1] && (p[k] == '.' || p[k] == s[i]);
                } else {
                    k--;
                    int j = 0; 
                    dp[k][i] = dp[k+2][i];
                    while (i + j < len_s && (p[k] == '.' || p[k] == s[i+j])) {
                        if (dp[k][i]) break;
                        dp[k][i] = dp[k][i] || dp[k+2][i+1+j] ;
                        j++;
                    }
                }
            }
        }
        return dp[0][0];
    }

    /* r  *
    bool isMatch(const char *s, const char *p) {
        if (p == NULL || s == NULL) {
            return false;
        }

        if (*p == '\0') return *s == *p;

        if (*(p+1) != '*') {
            if ( *s != 0 && (*p == *s || *p == '.' )) { 
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
    } */ 

};
