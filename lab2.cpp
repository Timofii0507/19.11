#include <iostream>
#include "point.h"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Point point1, point2;
    cout << "Введіть координати для Пункту 1 (x y): ";
    cin >> point1.x >> point1.y;
    cout << "Введіть координати для Пункту 2 (x y): ";
    cin >> point2.x >> point2.y;
    double distance = calculateDistance(point1, point2);
    cout << "Відстань між Пунктом 1 та Пунктом 2: " << distance << endl;
    return 0;
}