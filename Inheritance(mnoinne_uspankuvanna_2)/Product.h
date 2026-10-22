#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
	string name;
	float price;
	float weight;
public:
	Product();
	Product(string name, float price, float weight);

	string getName() const;
	float getPrice() const;
	float getWeight() const;

	void setName(string newName);
	void setPrice(float price);
	void setWeight(float weight);

	void showProduct() const;
	friend ostream& operator<<(ostream& out, const Product& obj);
};

