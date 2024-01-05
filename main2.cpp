#include "car.h"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Car myCar;
    myCar.setValues();
    cout << "\nІнформація про автомобіль:\n";
    myCar.displayValues();
    cout << "\nПошук за коліром:\n";
    myCar.searchValues();
    return 0;
}
