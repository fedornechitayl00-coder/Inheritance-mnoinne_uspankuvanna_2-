#include "Book.h"

Book::Book()
{
	author = "noname";
	edition = "undef";
	publicationDate = Date(0, 0, 0);
	isbh = 0;
}

Book::Book(std::string author, std::string edition, Date publicationDate, long isbh)
{
	this->author = author;
	this->edition = edition;
	this->publicationDate = publicationDate;
	this->isbh = isbh;
}

void Book::showInfo() const
{
	std::cout << "author:" << author <<
		"\nedition:" << edition <<
		"\npublication date:" << publicationDate <<
		"\nesbh:" << isbh << "\n";
}
