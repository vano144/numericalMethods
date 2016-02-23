//
//  initDateLagr.h
//  methodSecant
//
//  Created by v144 on 16.11.15.
//  Copyright © 2015 v144. All rights reserved.
//

#ifndef initDateLagr_h
#define initDateLagr_h
#include <vector>
struct Point {
    int x;
    int y;
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
};
std::vector<Point> initDate()
{
    std::vector<Point> result;
    result.insert(result.end(),Point(1,5));
    result.insert(result.end(),Point(2,6));
    result.insert(result.end(),Point(3,8));
    result.insert(result.end(),Point(4,10));
    result.insert(result.end(),Point(5,12));
    result.insert(result.end(),Point(6,13));
    result.insert(result.end(),Point(7,12));
    result.insert(result.end(),Point(8,10));
    result.insert(result.end(),Point(9,8));
    result.insert(result.end(),Point(10,10));
    result.insert(result.end(),Point(11,8));
    result.insert(result.end(),Point(12,11));
    result.insert(result.end(),Point(13,7));
    result.insert(result.end(),Point(14,9));
    result.insert(result.end(),Point(15,11));
    result.insert(result.end(),Point(16,10));
    result.insert(result.end(),Point(17,9));
    result.insert(result.end(),Point(18,12));
    result.insert(result.end(),Point(19,11));
    result.insert(result.end(),Point(20,6));
    return result;
}
#endif /* initDateLagr_h */
