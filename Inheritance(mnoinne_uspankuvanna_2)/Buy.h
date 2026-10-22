#pragma once
#include "Product.h"

class Buy :
    public Product
{
private:
    int amount;
public:
    Buy(int amount, Product p);
    void setAmount(int amount);
    int getAmount() const;

    float calcTotalPrice() const;
    float calcTotalWeight() const;
    
    void showBuy() const;
    friend ostream& operator <<(ostream& out, Buy& obj);

};

