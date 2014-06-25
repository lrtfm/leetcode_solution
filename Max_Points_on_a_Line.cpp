/****************************************************************************\

    FileName: Max_Points_on_a_Line.cpp
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: Sat Jun 14 20:35:48 CST 2014

\****************************************************************************/
#include "common.h"
struct Point {
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
};

class Solution {
public:

    struct Line {
        int a;
        int b;
        int c;
        Line() : a(0), b(0), c(0) {}
        Line(int x, int y, int z) : a(x), b(y), c(z) {}

        bool operator==(const Line &o) const {
            return (a*o.b == b*o.a && a*o.c == c*o.a);
        }

        bool operator<(const Line &o) const {
            return (a*o.b < b*o.a);
        }
    };

    class comp { 
        public:
        bool operator()(const Point a, const Point b) const {
            return (a.x > b.x || (a.x == b.x && a.y > b.y));
        }
    };

    int maxPoints(vector<Point> &points) {
        map<Point, int, comp> pointMap;
        map<Line, set<Point, comp> > lineMap;
        size_t len = points.size();
        if (len < 3) return len;

        for (size_t i = 0; i < len; ++i) {
            map<Point, int>::iterator it = pointMap.find(points[i]);
            if (it != pointMap.end()) {
                it->second += 1;
            } else {
                pointMap[points[i]] = 1;
            }
        }

        map<Point, int>::iterator it = pointMap.begin();
        while (it != pointMap.end()) {
            map<Point, int>::iterator it2 = it;
            ++it2;
            while (it2 != pointMap.end()) {
                Line tmp(it->first.x - it2->first.x,
                        it->first.y - it2->first.y,
                        it->first.x * it2->first.y - it->first.y * it2->first.x);
                lineMap[tmp].insert(it->first);
                lineMap[tmp].insert(it2->first);
                ++it2;
            }
            ++it;
        }

        int ret = 0;
        int tmp = 0;
        map<Line, set<Point, comp> >::iterator lit = lineMap.begin();
        while ( lit != lineMap.end() ) {
            tmp = 0;
            set<Point, comp>::iterator sit = lit->second.begin();
            while (sit != lit->second.end()) {
                tmp += pointMap[*sit];
                ++sit;
            }

            if (tmp > ret) {
                ret = tmp;
            }
            ++lit;
        }

        return (ret == 0) ? points.size() : ret;
    }


};
