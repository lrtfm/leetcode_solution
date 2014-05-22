/* Test_Two_Sum.cpp */

#include <iostream>
#include <vector>
using namespace std;

#include "Two_Sum.cpp"


/* test  code begin */
int main(int argc, char *argv[])
{
    int i;
    Solution solver;
    vector<int> numbers(4, 0); 
    numbers[0] = 15;
    numbers[1] = 7;
    numbers[2] = 11;
    numbers[3] = 2;

    int target = 9;
    vector<int> expect_output(2, 0);
    expect_output[0] = 2;
    expect_output[1] = 4;

    vector<int> output = solver.twoSum(numbers, target);
    if ( expect_output.size() == output.size() ) {
        for (i = 0; i < expect_output.size(); i++) {
            if (expect_output[i] != output[i]) {
                goto error;
            }
        }
    }
    else {
        goto error;
    }

    cout<< "Test Correct" << endl;
    return 0;
error:
    cout<< "Test Error" << endl;
    return 0;
}
