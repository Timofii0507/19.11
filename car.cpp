#include "car.h"

using namespace std;

Car::Car()
{
    length = 0.0;
    clearance = 0.0;
    engineVolume = 0.0;
    enginePower = 0.0;
    wheelDiameter = 0.0;
    color = "";
    transmissionType = "";
}

void Car::setValues() 
{
    cout << "Введіть довжину автомобіля: ";
    cin >> length;
    cout << "Введіть кліренс автомобіля: ";
    cin >> clearance;
    cin.ignore();
    cout << "Введіть колір автомобіля: ";
    getline(std::cin, color);
    cout << "Введіть тип коробки передач: ";
    getline(std::cin, transmissionType);
}

void Car::displayValues() const 
{
    cout << "Довжина: " << length << " м\n";
    cout << "Кліренс: " << clearance << " м\n";
    cout << "Колір: " << color << "\n";
    cout << "Тип коробки передач: " << transmissionType << "\n";
}

void Car::searchValues() const 
{
    string searchColor;
    cout << "Введіть колір для пошуку: ";
    getline(cin, searchColor);

    if (searchColor == color) 
    {
        cout << "Автомобіль з таким коліром знайдено!\n";
        displayValues();
    }
    else 
    {
        cout << "Автомобіль з таким коліром не знайдено.\n";
    }
}
