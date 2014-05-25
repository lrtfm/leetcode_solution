/****************************************************************************\

    FileName: Integer_to_Roman.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月25日 16:37:45

\****************************************************************************/
#include <string>
using namespace std;
class Solution {

public:
    string intToRoman(int num) {
        char table[4][3] = { "IV", "XL", "CD", "MN"};
        int n = 0;
        int d = 0;
        string ret("");
        while( num != 0) {
            d = num%10;
            if (d == 0) {
                // do nothing;
            } else if (d > 0 && d < 4) {
                ret = string(d, table[n][0]) + ret;
            } else if (d > 3 && d < 6) {
                ret = string(5 - d, table[n][0]) + string(1, table[n][1]) + ret;
            } else if (d > 5 && d < 9) {
                ret = string(1, table[n][1]) + string(d - 5, table[n][0]) + ret;
            } else {
                ret = string(1, table[n][0]) + string(1, table[n+1][0]) + ret;
            }
            num = num/10;
            n++;
        }

        return ret;
    }
};
