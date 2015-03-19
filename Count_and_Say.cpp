/****************************************************************************\

    FileName: Count_and_Say.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ18ÈÕ 18:58:57

\****************************************************************************/
class Solution {
public:
    string countAndSay(int n) {
        string orig("1");
        stringstream tmpStream;
        char c;
        int num;
        int j = 0;
        for (int i = 1; i < n; ++i) {
            j = 0;
            c = orig[j];
            num = 0;
            while(j < orig.size()) {
                if (orig[j] == c) {
                    num++;
                } else {
                    tmpStream << num << c;
                    c = orig[j];
                    num = 1;
                }    
                j++;
            }
            tmpStream << num << c;
            orig = tmpStream.str();
            tmpStream.str("");
        }
        return orig;
    }
};
