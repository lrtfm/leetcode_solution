/****************************************************************************\

    FileName: Reverse_Integer.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月24日 12:07:37

\****************************************************************************/

class Solution {
public:
    int reverse(int x) {
        if (x == 0) return x;

        int flag = false;
        if (x < 0) {
            flag = true;
            x = - x;
        }
        int ret = 0;
        
        while (x != 0) {
            ret = ret*10 + x%10;
            x = x/10;
        }

        if (flag) {
            ret = -ret;
        }

        return ret;
    }
};
