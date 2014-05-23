/****************************************************************************\

    Problem: Median of Two Sorted Arrays
    Description: 
        There are two sorted arrays A and B of size m and n respectively. 
        Find the median of the two sorted arrays. The overall run time 
        complexity should be O(log (m+n)).
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2013-01-09

\****************************************************************************/

class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) 
    {
        int ret =  findLowerMedianSortedArrays(A, m, B, n);
        int ret2 = findUpperMedianSortedArrays(A, m, B, n);
        return (ret + ret2)/2.0;
    }

private:

    int findLowerMedianSortedArrays(int A[], int m, int B[], int n) 
    {
        if (m == 0 && n > 0) { return B[(n-1)/2]; }
        if (n == 0 && m > 0) { return A[(m-1)/2]; }
        if (n < 0 || m < 0) { return 0; }

        if ((m + n)%2 == 0) {
            if (A[m - 1] > B[n - 1]) {
                m = m - 1;
            } else {
                n = n - 1;
            }
        }

        int *tmp1;
        int tmp;
        int *odd = A;
        int odd_n = m;
        int *even = B;
        int even_n = n;
        if (m%2 == 0) {
            odd = B;
            odd_n = n;
            even = A;
            even_n = m;
        }
        int i, j, k;

        while (even_n != 0) 
        {
            if (odd[odd_n/2] >= even[even_n/2 - 1] && odd[odd_n/2] <= even[even_n/2])
            {
                return odd[odd_n/2];
            }
            else if (odd[odd_n/2] < even[even_n/2 - 1])
            {
                i = even_n/2;
                j = odd_n/2;
                k = (i > j)? j : i;
                if (k == 0)
                {
                    return even[even_n/2 - 1];
                }
                if (k%2 == 0) 
                {
                    odd = odd + k;
                    odd_n = odd_n - k;
                    even_n = even_n - k;
                }
                else
                {
                    tmp1 = even;
                    tmp = even_n;
                    even = odd + k;
                    even_n = odd_n - k;
                    odd = tmp1;
                    odd_n = tmp -k;
                }
            }
            else if (odd[odd_n/2] > even[even_n/2])
            {
                i = even_n/2;
                j = odd_n/2;
                k = (i > j)? j : i;
                if (k == 0)
                {
                    return even[even_n/2];
                }
                if (k%2 == 0) 
                {
                    even = even + k;
                    odd_n = odd_n - k;
                    even_n = even_n - k;
                }
                else
                {
                    tmp1 = even;
                    tmp = even_n;
                    even = odd;
                    even_n = odd_n - k;
                    odd = tmp1 + k;
                    odd_n = tmp -k;
                }
            }
        }
        return odd[odd_n/2];
    }
    int findUpperMedianSortedArrays(int A[], int m, int B[], int n) 
    {
        if (m == 0 && n > 0) { return B[n/2]; }
        if (n == 0 && m > 0) { return A[m/2]; }
        if (n < 0 || m < 0) { return 0; }

        int *newA = A;
        int *newB = B;
        if ((m + n)%2 == 0) {
            if (A[0] > B[0]) {
                n = n - 1;
                newB = B + 1;
            } else {
                m = m - 1;
                newA = A + 1;
            }
        }
        return findLowerMedianSortedArrays(newA, m, newB, n);
    }
};
