#include <iostream>
#include "point.h"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Point point1, point2;
    cout << "������ ���������� ��� ������ 1 (x y): ";
    cin >> point1.x >> point1.y;
    cout << "������ ���������� ��� ������ 2 (x y): ";
    cin >> point2.x >> point2.y;
    double distance = calculateDistance(point1, point2);
    cout << "³������ �� ������� 1 �� ������� 2: " << distance << endl;
    return 0;
}