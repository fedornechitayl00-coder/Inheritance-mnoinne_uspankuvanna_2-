#include "Voice_recording.h"

Voice_recording::Voice_recording()
{
	speaker = "noname";
	duration = 0;
	recordingDate = Date(0, 0, 0);
}

Voice_recording::Voice_recording(std::string speaker, int duration, Date recordingDate)
{
	this->speaker = speaker;
	this->duration = duration;
	this->recordingDate = recordingDate;
}

void Voice_recording::showInfo() const
{
	std::cout << "Speaker:" << speaker <<
		"\nDuration:" << duration <<
		"\nRecording date:" << recordingDate << "\n";
}
