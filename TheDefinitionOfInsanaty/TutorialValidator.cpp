#include "TutorialValidator.h"

TutorialException::TutorialException(vector<string> errors)
{
	this->errors = errors;
}

void TutorialValidator::validate(const Tutorial & s)
{
	vector<string> errors;
	if (s.getTitle().size() < 1)
		errors.push_back(string("Please insert a title!\n"));
	if (s.getPresenter().size() < 1)
		errors.push_back(string("Please insert a presenter!\n"));
	if (s.getDuration().getMin() <= 0 && s.getDuration().getSec() <= 0)
		errors.push_back(string("The duration cannot be less or equal to 0!\n"));
	if (s.getLikes() <= 0)
		errors.push_back(string("The number of likes cannot be less or equal to 0!\n"));
	if (s.getVis() <= 0)
		errors.push_back(string("The number of views cannot be less or equal to 0!\n"));
	size_t www = s.getLink().find("www");
	size_t http = s.getLink().find("http");
	if (www != 0 && http != 0)
		errors.push_back(string("The youtube source must start with one of the following strings: \"www\" or \"http\""));

	if (errors.size() > 0)
		throw TutorialException(errors);
}