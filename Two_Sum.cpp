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

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> indexes = sort_index(numbers);
        vector<int> result;
        for (unsigned int pos = 0; pos < indexes.size() ; ++pos) {
            int expect_number = target - numbers[indexes[pos]];
            for (unsigned int result_pos = pos + 1; pos < indexes.size() 
                && numbers[indexes[result_pos]] < (target + 1)/2; ++ result_pos) {
                if (numbers[indexes[result_pos]] == expect_number) {
                    result.push_back(result_pos > pos ? pos : result_pos);
                    result.push_back(pos > result_pos ? pos : result_pos);
                    return result;
                }
            }
        }
        return result;
    }
    
private:
    vector<int> sort_index(vector<int> &numbers) {
        vector<int> indexes;
        for (unsigned pos = 0; pos < numbers.size(); ++pos) {
            indexes = pos;
        }
        
        if (numbers.size() > 1) {
            sort_inner(numbers, indexes, 0, numbers.size - 1);
        }
        return indexes;
        
    }
    sort_inner(vector<int> &numbers, voector<int> &indexes, int start, int end) {
        if (start == end) {
            return;
        }
        
        int middle = (start + end) / 2;

        sort_inner(numbers, indexes, start, middle);
        sort_inner(numbers, indexes, middle + 1, end);
        
        vector<int> temp_index_space;
        int i = start, j = middle + 1;
        while(i <= middle && j <= end) {
            if (numbers[indexes[i]] > numbers[indexes[j]]) {
                temp_index_space.push_back(j++);
            }
            else {
                temp_index_space.push_back(i++);
            }
        }
        
        if (i < middle) {
            while( i <= middle) {
                temp_index_space.push_back(i++);
            }
        }
        else
        {
            while( j <= end) {
                temp_index_space.push_back(j++);  
            }
        }
        
        for (unsigned int pos = 0; pos < temp_index_space.size(); ++pos )
        {
            indexes[pos + start] = temp_index_space[pos];
        }
    }
};
