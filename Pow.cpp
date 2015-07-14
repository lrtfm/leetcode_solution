/****************************************************************************\

    FileName: Pow.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê04ÔÂ 5ÈÕ 10:31:55

\****************************************************************************/
class Solution {
public:
    double pow(double x, int n) 
    {
        if (x == 0) {
            return 0;
        }


        int m = n > 0 ? n : -n;
        double r = 1;

        while (m > 0) {
            int t = 1;
            double p = x;
            while (t <= m/2) {
                t = 2 * t;
                p = p * p;
            }
            r = r * p;
            m = m - t;
        }

        if (n < 0) {
            r = 1.0/ r;
        }
        return r;
    }

};
