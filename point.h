#ifndef POINT_H
#define POINT_H

struct Point 
{
    double x;
    double y;
};

double calculateDistance(const Point& p1, const Point& p2);

#endif 
