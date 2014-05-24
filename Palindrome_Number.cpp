/****************************************************************************\

    FileName: Palindrome_Number.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 18:48:42

\****************************************************************************/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;
        
        int n = 0;
        int r = x;
        while (r != 0) {
            r = r/10;
            n++;
        }
        
        r = 1;
        for (int i = 0; i < (n+1)/2; i++) {
            r = r*10;
        }
        
        int t = x/r;
        if (n%2 != 0) { r = r/10; }
        x = x%r;
        
        r = 0;
        while (t != 0) {
            r = r*10 + t%10;
            t = t/10;
        }
        if (r == x) {
            return true;
        }
        return false;
    }
};
