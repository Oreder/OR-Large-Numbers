#pragma once
#include "ConvertBase.h"

class ToBinary : public ConvertBase
{
public:
	ToBinary(string src);
	~ToBinary();

	string do_stuff();

private:
	string divide_by_two(string num);
	int oddsToOne(char c);

	string src = "";
};

