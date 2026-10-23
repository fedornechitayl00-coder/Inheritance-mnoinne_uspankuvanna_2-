#pragma once
#include "Book.h"
#include "Voice_recording.h"

class TalkingBook
	: public Book,
	public Voice_recording
{
protected:
	int tapes;
public:
	TalkingBook();
	TalkingBook(std::string author, std::string edition, Date publicationDate, long isbh, std::string speaker, int duration, Date recordingDate, int tapes);
	
	void showInfo() const;
};

