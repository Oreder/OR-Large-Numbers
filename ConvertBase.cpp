#include "ConvertBase.h"

string ConvertBase::do_stuff()
{
	return string();
}

int ConvertBase::CharToNumber(char c)
{
	return (int)(c - '0');
}

char ConvertBase::NumberToChar(int d)
{
	return (char)('0' + d);
}

