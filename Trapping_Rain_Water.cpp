/****************************************************************************\

    FileName: Trapping_Rain_Water.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2015Äê03ÔÂ19ÈÕ 12:30:47

\****************************************************************************/
class Solution {
public:
    int trap(int A[], int n) {
        if (n < 2) {
            return 0;
        }
        int sum = 0;
        map<int, set<int> > xxxmap;
        for (int i = 0; i < n; ++i) {
            if (xxxmap.find(A[i]) == xxxmap.end()) {
                xxxmap.insert(pair<int, set<int> >(A[i], set<int>()));
            }
            xxxmap[A[i]].insert(i);
            // cout << "DEBUG " << A[i] << "  " << i << endl;
        }
        map<int, set<int> >::reverse_iterator it = xxxmap.rbegin();
        int max = 0;
        int r, l, r2, l2;
        max = it->first;
        r = *(it->second.rbegin());
        l = *(it->second.begin());
        sum = max * (r - l - 1);
        if (sum < 0) {
            sum = 0;
        }
        for (int i = l + 1; i < r; ++i) {
            sum -= A[i];
        }
        // cout << "DEBUG " << r << " " << l  << " " << sum << endl;
        
        ++it;
        for (; it != xxxmap.rend(); ++it) {
            max = it->first;
            r2 = *(it->second.rbegin());
            l2 = *(it->second.begin());
            if (r2 > r) {
                sum = sum + max * (r2 - r - 1);
                for (int i = r + 1; i < r2; ++i) {
                    sum -= A[i];
                }
                r = r2;
            }
            if (l2 < l) {
                sum = sum + max * (l - l2 - 1);
                for (int i = l2 + 1; i < l; ++i) {
                    sum -= A[i];
                }
                l = l2;
            }
            // cout << "DEBUG " << r << " " << l  << " " << sum << endl;
        }
        return sum;
    }

};
