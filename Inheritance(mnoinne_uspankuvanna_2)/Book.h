#pragma once
#include <string>
#include <iostream>
#include "Date.h"

class Book
{
protected:
	std::string author;
	std::string edition;
	Date publicationDate;
	long isbh;
public:
	Book();
	Book(std::string author, std::string edition, Date publicationDate, long isbh);
	
	virtual void showInfo() const;
};

