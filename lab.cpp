#include "rectangle.h"
#include <iostream>

using namespace std;

int main() 
{
    Rectangle myRectangle;
    char symbol;
    cout << "Enter X coordinate: ";
    cin >> myRectangle.x;
    cout << "Enter Y coordinate: ";
    cin >> myRectangle.y;
    cout << "Enter width: ";
    cin >> myRectangle.width;
    cout << "Enter height: ";
    cin >> myRectangle.height;
    cout << "Enter a symbol to draw the rectangle: ";
    cin >> symbol;
    printRectangle(myRectangle, symbol);
    double deltaX, deltaY;
    cout << "Enter X movement: ";
    cin >> deltaX;
    cout << "Enter Y movement: ";
    cin >> deltaY;
    moveRectangle(myRectangle, deltaX, deltaY);
    double newWidth, newHeight;
    cout << "Enter new width: ";
    cin >> newWidth;
    cout << "Enter new height: ";
    cin >> newHeight;
    resizeRectangle(myRectangle, newWidth, newHeight);
    printRectangle(myRectangle, symbol);
    return 0;
}
