#include "Product.h"

Product::Product()
{
    name = "undefined";
    price = 0.0f;
    weight = 0.0f;
}

Product::Product(string name, float price, float weight)
{
    this->name = name;
    this->price = price;
    this->weight = weight;
}

string Product::getName() const
{
    return name;
}

float Product::getPrice() const
{
    return price;
}

float Product::getWeight() const
{
    return weight;
}

void Product::setName(string newName)
{
    if (!name.empty()) {
        this->name = name;
    }
}

void Product::setPrice(float price)
{
    if (price > 0) {
        this->price = price;
    }
}

void Product::setWeight(float weight)
{
    if (weight > 0) {
        this->weight = weight;
    }
}

void Product::showProduct() const
{
    cout << "\nName:\t" << name <<
        "\nPrice:\t" << price <<
        "\nWeight\t" << weight << "\n";
}

ostream& operator<<(ostream& out, const Product& obj)
{
    cout << "\nName:\t" << obj.name <<
        "\nPrice:\t" << obj.price <<
        "\nWeight\t" << obj.weight << "\n";
    return out;
}
