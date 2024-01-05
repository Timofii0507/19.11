#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car 
{
private:
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    string color;
    string transmissionType;

public:
    Car(); 
    void setValues(); 
    void displayValues() const; 
    void searchValues() const;  
};

#endif 
