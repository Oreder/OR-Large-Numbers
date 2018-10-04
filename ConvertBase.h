#pragma once
#include <string>
#include <iostream>
using namespace std;

class ConvertBase
{
public:
	// Main
	virtual string do_stuff();

protected:
	int CharToNumber(char c);
	char NumberToChar(int d);
};

