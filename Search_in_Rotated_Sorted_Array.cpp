/****************************************************************************\

    FileName: Search_in_Rotated_Sorted_Array.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ15ÈÕ 23:58:35

\****************************************************************************/
class Solution {
public:
    int search(int A[], int n, int target) {
        for (int i = 0; i < n; ++i) {
            if (A[i] == target) {
                return i;
            }
        }
        return -1;
    }
};
