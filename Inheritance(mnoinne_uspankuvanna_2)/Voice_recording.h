#pragma once
#include <string>
#include <iostream>
#include "Date.h"

class Voice_recording
{
protected:
	std::string speaker;
	int duration;
	Date recordingDate;
public:
	Voice_recording();
	Voice_recording(std::string speaker, int duration, Date recordingDate);

	virtual void showInfo() const;
};

