#pragma once
#include <string>
#include <iostream>

class Car
{
protected:
	std::string mark;
	std::string color;
	unsigned short volume;
	short normOfUsingVolume_on100km;
public:
	Car();
	Car(std::string mark, std::string color, unsigned short volume, short normOfUsingVolume_on100km);
	~Car();

	std::string getMark() const;
	void setMark(std::string mark);
	std::string getColor() const;
	void setColor(std::string color);
	unsigned short getVolume() const;
	void setVolume(unsigned short volume);
	short getNormOfUsingVolume_on100km() const;
	void getNormOfUsingVolume_on100km(short normOfUsingVolume);

	void showInfo() const;
	float calcKmFromAllUsedVolume();
};

