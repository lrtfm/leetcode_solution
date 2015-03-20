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
        if (num1.size() == 0 || num2.size() == 0) {
            return string();
        }
        if (num1.size() > num2.size()) {
            return inner(num2, num1);
        } else {
            return inner(num1, num2);
        }
    }

    string inner(string & num1, string & num2) {
        int c = 0;
        int ch = '0';
        int n = num1.size();
        int m = num2.size();
        string ret(n + m, '0');

        int i = n - 1;
        for ( ; i >= 0; --i) {
            c = 0;
            int j = m - 1;
            for ( ; j >= 0; --j) {
                c = c + (num1[i] - '0') * (num2[j] - '0') + (ret[n - i + m - j - 2] - '0');
                ch = c%10 + '0';
                ret[n -i + m - j - 2] = ch;
                c = c/10;
            }
            while (c != 0) {
                c = c + (ret[n - i + m - j - 2] - '0');
                ch = c%10 + '0';
                ret[n -i + m - j - 2] = ch;
                c = c/10;
                j--;
            }
        }

        i = ret.size() - 1;
        while (i > 0 && ret[i] == '0') {
            i--;
        }
        ret.resize(i+1);

        return string(ret.rbegin(), ret.rend());
    }

};
