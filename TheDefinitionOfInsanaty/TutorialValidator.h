#pragma once
#include <string>
#include "Tutorial.h"
#include <vector>

class TutorialException
{
private:
	vector<string> errors;

public:
	TutorialException(vector<string> errors);
	vector<string> getErrors() const { return errors; };
};

class TutorialValidator
{
public:
	TutorialValidator() {}
	static void validate(const Tutorial& s);
};