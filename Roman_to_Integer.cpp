/****************************************************************************\

    FileName: Roman_to_Integer.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月25日 16:38:04

\****************************************************************************/

#include <map>
#include <string>
using namespace std;
map<char, int>::value_type init_value[] =
{
    map<char, int>::value_type('I', 1),
    map<char, int>::value_type('V', 5),
    map<char, int>::value_type('X', 10),
    map<char, int>::value_type('L', 50),
    map<char, int>::value_type('C', 100),
    map<char, int>::value_type('D', 500),
    map<char, int>::value_type('M', 1000)
};
class Solution {
private:
     map<char, int> table;

public:
    int romanToInt(string s) {
        table = map<char, int>(init_value, init_value+7);
        size_t len = s.size();
        size_t i = 0;
        int ret = 0;
        while (i < len) {
            char p = s[i];
            int n = 0;
            while (i < len && p == s[i]) {
                i++;
                n++;
            }
            if (n == 1 && i < len && table[s[i]] > table[p]) {
                ret += table[s[i]] - table[p];
                i++;
            } else {
                ret += table[p] * n;
            }
        }

        return ret;
    }
};
