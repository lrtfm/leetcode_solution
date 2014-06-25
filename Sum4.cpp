/****************************************************************************\
    FileName: Sum4.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: Tue May 27 12:14:55 CST 2014
\****************************************************************************/
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    typedef vector<pair<int,int> > VP; 
    typedef pair<int,int> PII; 

    vector<vector<int> > fourSum(vector<int> &num, int target) {
        sort(num.begin(),num.end());
        int len = num.size(); 
        unordered_map<int,VP> dict; 
        for(int i = 0; i < len-1 ; i ++)
            for(int j = i+1; j < len ; j++)
                dict[num[i]+num[j]].push_back(pair<int,int>(i,j));
        vector<vector<int> > res; 
        unordered_map<int,VP>::iterator pos = dict.begin(); 
        while(pos != dict.end()){
            int s1 = pos->first; 
            int s2 = target-s1;
            if(s1 > s2)
                break;
            ++pos; 
            if(dict.find(s2) != dict.end()){
                VP p1 = dict[s1]; 
                VP p2 = dict[s2]; 
                for(int i = 0; i < p1.size(); i ++)
                    for(int j = 0; j < p2.size(); j++){
                        PII pi1 = p1[i]; 
                        PII pi2 = p2[j];
                        int i1 = pi1.first; int i2 = pi1.second; 
                        int j1 = pi2.first; int j2 = pi2.second; 
                        if(i1 != j1 && i1 != j2 && i2 != j1 && i2 != j2){
                            vector<int> temp; 
                            temp.push_back(num[i1]); temp.push_back(num[i2]); temp.push_back(num[j1]); temp.push_back(num[j2]);
                            sort(temp.begin(),temp.end()); 
                            res.push_back(temp);
                        }
                    }
            }
        }
        sort(res.begin(),res.end()); 
        vector<vector<int> >::iterator iter = unique(res.begin(),res.end()); 
        res.resize(distance(res.begin(),iter));
        return res;
    }
    /*
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        size_t len = num.size();
        vector< vector<int> > ret;
        if (len < 4) {
            return ret;
        }
        
        sort(num.begin(), num.end());
        vector<int> tmp(4, 0);
        for (size_t i = 0; i < len - 3 && num[i] <= target / 4; ++i) {
            if (i != 0) {
                if (tmp[0] == num[i]) {
                    continue;
                }
            }
            tmp[0] = num[i];
            for (size_t j = i + 1; j < len - 2; ++j ) {
                if (j != i + 1) {
                    if (tmp[1] == num[j]) {
                        continue;
                    }
                }
                tmp[1] = num[j];
                int psum = target - num[i] - num[j];
                if (psum/2 < num[j]) {
                    break;
                }
                size_t k = j + 1;
                size_t l = len - 1;
                bool k_flag = false;
                bool l_flag = false;
                while (k < l && num[k] <= psum/2 && num[l] >= psum/2) {
                    if (k_flag && tmp[2] == num[k]) {
                        k++;
                        continue;
                    }
                    if (l_flag && tmp[3] == num[l]) {
                        l--;
                        continue;
                        
                    }
                    tmp[2] = num[k];
                    tmp[3] = num[l];
                    int tsum = num[l] + num[k];
                    if ( tsum == psum) {
                        ret.push_back(tmp);
                        k++;
                        l--;
                        k_flag = true;
                        l_flag = true;
                    } else if(tsum < psum) {
                        k++;
                        k_flag = true;
                        l_flag = false;
                    } else {
                        l--;
                        l_flag = true;
                        k_flag = false;
                    }
                }
            }
        }
        return ret;
    }
    */
};
