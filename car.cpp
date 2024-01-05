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
    cout << "������ ������� ���������: ";
    cin >> length;
    cout << "������ ������ ���������: ";
    cin >> clearance;
    cin.ignore();
    cout << "������ ���� ���������: ";
    getline(std::cin, color);
    cout << "������ ��� ������� �������: ";
    getline(std::cin, transmissionType);
}

void Car::displayValues() const 
{
    cout << "�������: " << length << " �\n";
    cout << "������: " << clearance << " �\n";
    cout << "����: " << color << "\n";
    cout << "��� ������� �������: " << transmissionType << "\n";
}

void Car::searchValues() const 
{
    string searchColor;
    cout << "������ ���� ��� ������: ";
    getline(cin, searchColor);

    if (searchColor == color) 
    {
        cout << "��������� � ����� ������ ��������!\n";
        displayValues();
    }
    else 
    {
        cout << "��������� � ����� ������ �� ��������.\n";
    }
}
