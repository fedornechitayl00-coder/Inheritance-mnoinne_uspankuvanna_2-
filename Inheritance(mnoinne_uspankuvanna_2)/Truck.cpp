#include "Truck.h"

Truck::Truck()
{
    weight = 0;
}

Truck::Truck(std::string mark, std::string color, unsigned short volume, short normOfUsingVolume_on100km, int weight)
    : Car(mark, color, volume, normOfUsingVolume_on100km)
{
    this->weight = weight;
}

Truck::~Truck()
{
    std::cout << "\nTruck was destroyed\n";
}

int Truck::getWeight() const
{
    return weight;
}

void Truck::showInfo() const
{
    Car::showInfo();
    std::cout << "Weight truck can take: " << weight << "\n";
}

float Truck::calcSelfCostPer1TonWeight() const
{
    return ((normOfUsingVolume_on100km/100)*99.99)/weight;
}
