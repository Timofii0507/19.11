#include "rectangle.h"
#include <iostream>

using namespace std;

void moveRectangle(Rectangle& rect, double deltaX, double deltaY) 
{
    rect.x += deltaX;
    rect.y += deltaY;
}

void resizeRectangle(Rectangle& rect, double newWidth, double newHeight) 
{
    rect.width = newWidth;
    rect.height = newHeight;
}

void printRectangle(const Rectangle& rect, char symbol) 
{
    for (int i = 0; i < rect.height; ++i) 
    {
        for (int j = 0; j < rect.width; ++j) 
        {
            cout << symbol << ' ';
        }
        cout << endl;
    }
    cout << endl;
}
