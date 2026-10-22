#include "Car.h"

Car::Car()
{
    mark = "undefned";
    color = "none";
    volume = 0;
    normOfUsingVolume_on100km = 0;
}

Car::Car(std::string mark, std::string color, unsigned short volume, short normOfUsingVolume_on100km)
{
    this->mark = mark;
    this->color = color;
    this->volume = volume;
    this->normOfUsingVolume_on100km = normOfUsingVolume_on100km;
}

Car::~Car()
{
    std::cout << "\nCar was destroyed\n";
}

std::string Car::getMark() const
{
    return mark;
}

void Car::setMark(std::string mark)
{
    this->mark = mark;
}

std::string Car::getColor() const
{
    return color;
}

void Car::setColor(std::string color)
{
    this->color = color;
}

unsigned short Car::getVolume() const
{
    return volume;
}

void Car::setVolume(unsigned short volume)
{
    this->volume = volume;
}

short Car::getNormOfUsingVolume_on100km() const
{
    return normOfUsingVolume_on100km;
}

void Car::getNormOfUsingVolume_on100km(short normOfUsingVolume)
{
    this->normOfUsingVolume_on100km = normOfUsingVolume;
}

void Car::showInfo() const
{
    std::cout << "\nMark:\t" << mark <<
        "\nColor\t" << color <<
        "\nVolume\t" << volume << 
        "\nNorm of used volume per 100km: " << normOfUsingVolume_on100km << "\n";
}

unsigned short Car::calcKmFromAllUsedVolume()
{
    return (volume/normOfUsingVolume_on100km)*100;
}
