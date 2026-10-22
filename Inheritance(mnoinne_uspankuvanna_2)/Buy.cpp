#include "Buy.h"

Buy::Buy(int amount, Product p) : Product(p)
{
    this->amount = amount;
}

void Buy::setAmount(int amount)
{
    this->amount = amount;
}

int Buy::getAmount() const
{
    return amount;
}

float Buy::calcTotalPrice() const
{
    return amount * getPrice();
}

float Buy::calcTotalWeight() const
{
    return amount * getWeight();
}

void Buy::showBuy() const
{
    Product::showProduct();
    cout << "\nAmount\t" << amount <<
        "\ntotal price\t" << calcTotalPrice() <<
        "\ntotal weight:\t" << calcTotalWeight();
}

ostream& operator<<(ostream& out, Buy& obj)
{
    obj.showProduct();
    cout << "\nAmount\t" << obj.amount <<
        "\ntotal price\t" << obj.calcTotalPrice() <<
        "\ntotal weight:\t" << obj.calcTotalWeight();
    return out;
}
