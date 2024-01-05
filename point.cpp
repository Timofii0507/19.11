#include "point.h"
#include <cmath>

double calculateDistance(const Point& p1, const Point& p2) 
{
    double deltaX = p2.x - p1.x;
    double deltaY = p2.y - p1.y;
    return std::sqrt(deltaX * deltaX + deltaY * deltaY);
}
