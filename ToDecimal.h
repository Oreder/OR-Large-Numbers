#pragma once
#include "ConvertBase.h"

class ToDecimal : public ConvertBase
{
public:
	ToDecimal(string src);
	~ToDecimal();

	string do_stuff();

private:
	// apply only for binary string into decimal string
	string multiplyByTwo(string src);

	// here, value is only 1 or 0.
	string addToDecimal(string src, char value);

	string src = "";
};

