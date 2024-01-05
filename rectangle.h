#ifndef RECTANGLE_H
#define RECTANGLE_H

struct Rectangle 
{
    double x;
    double y;
    double width;
    double height;
};

void moveRectangle(Rectangle& rect, double deltaX, double deltaY);
void resizeRectangle(Rectangle& rect, double newWidth, double newHeight);
void printRectangle(const Rectangle& rect, char symbol);

#endif
