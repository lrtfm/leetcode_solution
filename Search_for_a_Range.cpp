/****************************************************************************\

    FileName: Search_for_a_Range.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ15ÈÕ 23:59:25

\****************************************************************************/
class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        vector<int> ret(2, -1);
        int low = lower(A, n, target);
        int up = upper(A, n, target) - 1;
        if (low <= up) {
            ret[0] = low;
            ret[1] = up;
        }
        return ret;
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

    int upper(int A[], int n, int target) {
        int count = n;
        int start = 0;
        int i, step;
        while (count > 0) {
            i = start;
            step = count / 2;
            i += step;
            if (!(target < A[i])) {
                start = ++i; 
                count -= step + 1;
            } else {
                count = step;
            }
        }
        return start;
    }

};
