/****************************************************************************\

    FileName: Rotate_Array.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ16ÈÕ 12:56:51

\****************************************************************************/
class Solution {
public:
    void rotate(vector<int> &A, int n, int k) {
        int t;
        int e = (k > n) ? n : k;
        for (int i = 0; i < e; ++i) {
            t = A[i];
            int j = 1;
            int index = 0;
            while (1) {
                index = (i + j * k)%n;
                if (index == i) {
                    A[i] = t;
                    break;
                }
                if (index < e) {
                    e = index;
                }
                A[i] = A[index];
                A[index] = t;
                t = A[i];
                j++;
            }
        }
    }
};
