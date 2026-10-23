#include "Product.h"
#include "Buy.h"
#include "Car.h"
#include "Truck.h"
#include "TalkingBook.h"

int main()
{
	//Product noname;
	//Product apple("Apple", 20.0f, 1.0f);

	//noname.showProduct();
	//apple.showProduct();

	//Buy apples(16, apple);

	//cout << apples;

	Car BYD("BYD", "black", 100, 0);
	Truck Toyota("Toyota", "white", 120, 4000, 600);
	BYD.showInfo();
	Toyota.Truck::showInfo();

	std::cout << "\nmethod calc distance per full volume: " << BYD.calcKmFromAllUsedVolume();

	std::cout << "\nmethod calc self cost: " << Toyota.calcSelfCostPer1TonWeight();

	std::cout << "\n";

	Book aq("kjskj", "kkk", Date(12, 3, 2009), 233);
	Voice_recording bq("jsdwd", 8, Date(11, 5, 2018));
	TalkingBook cq("wihd", "ihw", Date(10, 9, 2009), 52, "sddd", 90, Date(5, 8, 2008), 10);
	aq.Book::showInfo();
	bq.Voice_recording::showInfo();
	cq.showInfo();

	return 0;
}