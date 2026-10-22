#include "Product.h"
#include "Buy.h"
#include "Car.h"
#include "Truck.h"


int main()
{
	//Product noname;
	//Product apple("Apple", 20.0f, 1.0f);

	//noname.showProduct();
	//apple.showProduct();

	//Buy apples(16, apple);

	//cout << apples;

	Car BYD("BYD", "black", 100, 5000);
	Truck Toyota("Toyota", "white", 120, 4000, 600);
	BYD.showInfo();
	Toyota.Truck::showInfo();

	std::cout << "\nmethod calc distance per full volume: " << BYD.calcKmFromAllUsedVolume();

	std::cout << "\nmethod calc self cost: " << Toyota.calcSelfCostPer1TonWeight();

	return 0;
}