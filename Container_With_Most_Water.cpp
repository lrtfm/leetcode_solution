/****************************************************************************\

    FileName: Container_With_Most_Water.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: 2014年05月25日 15:21:57

\****************************************************************************/
class Solution {
public:
    int maxArea(vector<int> &height) {
        int len = height.size();
        int area = 0;
        for (int i = 0; i < len; ++i) {
            if (height[i] == 0) continue;
            int min = area / height[i];
            for (int j = i + min; j < len; ++j) {
                int tmp = (j - i) * (height[i] > height[j] ? 
                        height[j] : height[i]);
                if (tmp > area) {
                    area = tmp;
                }
            }
        }

        return area;
    }
};
