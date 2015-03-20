/****************************************************************************\

    FileName: Multiply_Strings.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015年03月20日  8:41:44

\****************************************************************************/
class Solution {
public:
    string multiply(string num1, string num2) {
        int c = 0;
        char ch = '0';
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        string ret;
        while (i >= 0 && j >= 0) {
            c = c + (num1[i] - '0')*(num2[j] - '0');
            ch = c%10 + '0';
            ret = ret + ch;
            c = c / 10;
            i--; j--;
        }
        while (c != 0) {
            ch = c%10 + '0';
            ret = ret + ch;
            c = c/10;
        }
        i = ret.size() - 1;
        while (i >= 0 && ret[i] == 0) {
            i--;
        }
        if (i < 0) {
            i = 0;
        }
        ret.resize(i + 1);
        return string(ret.rbegin(), ret.rend());
    }

};
