/****************************************************************************\

    FileName: First_Missing_Positive.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ18ÈÕ 23:14:55

\****************************************************************************/
class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        int t;
        int s;
        for (int i = 0; i < n; ++i) {
            if (A[i] > 0 && A[i] != i + 1 && A[i] <= n) {
                t = A[A[i] - 1];
                A[A[i] - 1] = A[i];
                A[i] = t;
                while (t > 0 && t <= n) {
                    s = A[t-1];
                    A[t-1] = t;
                    t = s;
                    if (t == i + 1) {
                        break;
                    }
                }
            }
        }
        int i;
        for (i = 0; i < n && A[i] == i + 1; ++i) {
            ;
        }
        return i + 1;
    }
};
