/****************************************************************************\

    Problem: Two Sum
    Description: 
        Given an array of integers, find two numbers such that they add up to
        a specific target number.

        The function twoSum should return indices of the two numbers such that
        they add up to the target, where index1 must be less than index2. 
        Please note that your returned answers (both index1 and index2) are 
        not zero-based.

        You may assume that each input would have exactly one solution.

        Input: numbers={2, 7, 11, 15}, target=9
        Output: index1=1, index2=2
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2013-01-09

\****************************************************************************/

#include <vector>
#include <algorithm>        
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) 
    {
        vector<int> result;
        init(numbers);
        sort_data();
        info expect;
        vector<info>::iterator ret;

        for (vector<info>::iterator it = data.begin(); it != data.end(); ++it) {
            expect.key = target - it->key;
            ret = binary_find(it + 1, data.end(), expect);
            if (ret == data.end() || ret->index == it->index) {
                continue;
            }
            if (ret->index < it->index) {
                result.push_back(ret->index);
                result.push_back(it->index);
            } else {
                result.push_back(it->index);
                result.push_back(ret->index);
            }
            return result;
        }
        return result;
    }
private:
    struct info {
        unsigned int index;
        int key;

        bool operator< (const info & x) const
        {
            return key < x.key;
        }

        bool operator== (const info & x) const
        {
            return key == x.key;
        }
    };


    void init(vector<int> &numbers)
    {
        unsigned int len = numbers.size();
        data.resize(len);
        for (unsigned int i = 0; i < len; ++i) {
            data[i].index = i + 1;
            data[i].key = numbers[i];
        }
    }

    void sort_data()
    {
        sort(data.begin(), data.end());
    }

    vector<info>::iterator binary_find(vector<info>::iterator first, vector<info>::iterator last, info val)
    {
        first = lower_bound(first,last,val);
        if (val == *first) {
            return first;
        }
        return last;
    }


private:
    vector<info> data;
};

