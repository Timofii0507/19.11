#include "car.h"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Car myCar;
    myCar.setValues();
    cout << "\n���������� ��� ���������:\n";
    myCar.displayValues();
    cout << "\n����� �� ������:\n";
    myCar.searchValues();
    return 0;
}
