#pragma once
#include "Car.h"

class Truck :
    public Car
{
protected:
    int weight;
public:
    Truck();
    Truck(std::string mark, std::string color,
        unsigned short volume, short normOfUsingVolume_on100km, int weight);
    ~Truck();

    int getWeight() const;

    void showInfo() const;
    float calcSelfCostPer1TonWeight() const;
};

