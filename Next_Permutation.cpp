/****************************************************************************\

    FileName: Next_Permutation.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ15ÈÕ 16:47:20

\****************************************************************************/
class Solution {
public:
    void nextPermutation(vector<int> &num) {
        int n = num.size();
        if (n < 2) { return; }

        int i; 
        for (i = n - 2; i >= 0; --i) {
            if (num[i] < num[i + 1]) {
                reverse(num, i + 1, n - i - 1);
                int j = i + 1;
                while (num[j] <= num[i]) {
                    j++;
                }
                int tmp = num[j];
                num[j] = num[i];
                num[i] = tmp;
                break;
            }
        }

        if (i < 0) {
            reverse(num, 0, n);
        }

    }

    void reverse(vector<int> &num, int s, int n) {
        int tmp;
        for (int i = 0; i < n/2; ++i) {
            tmp = num[s + n - 1 - i];
            num[s + n - 1 - i] = num[s + i];
            num[s + i] = tmp;
        }
    }
};
