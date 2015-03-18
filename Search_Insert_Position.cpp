/****************************************************************************\

    FileName: Search_Insert_Position.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ16ÈÕ  0:00:28

\****************************************************************************/
class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        return lower(A, n, target);
    }

    int lower(int A[], int n, int target) {
        int count = n;
        int start = 0;
        int i, step;
        while (count > 0) {
            i = start;
            step = count / 2;
            i += step;
            if (A[i] < target) {
                start = ++i; 
                count -= step + 1;
            } else {
                count = step;
            }
        }
        return start;
    }

};
