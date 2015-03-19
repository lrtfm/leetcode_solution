#ifndef __COMMON_H__
#define __COMMON_H__
#include <vector>
#include <cstdarg>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
using namespace std;
template < typename T >
vector<T> cvector(int n, ...)
{
    vector<T> ret;
    va_list arg_ptr;
    va_start(arg_ptr, n);
    for (int i = 0; i < n; ++i) {
        T value = va_arg(arg_ptr, T);
        ret.push_back(value);
    }
    va_end(arg_ptr);

    return ret;
}    

template < typename T >
vector<T> cvectorp(int n, ...)
{
    vector<T> ret;
    va_list arg_ptr;
    va_start(arg_ptr, n);
    for (int i = 0; i < n; ++i) {
        T value = *(va_arg(arg_ptr, T*));
        ret.push_back(value);
    }
    va_end(arg_ptr);

    return ret;
}    


#endif
