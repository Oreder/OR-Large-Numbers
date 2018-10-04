#include "ToBinary.h"

ToBinary::ToBinary(string src)
{
	this->src = src;
}

ToBinary::~ToBinary()
{
	cout << "ToBinary is destroyed!\n";
}

string ToBinary::do_stuff()
{
	string res = "";
	string tmp = src;

	if (tmp == "0")
		res = "0";
	else
	{
		while (tmp != "")
		{
			int value = oddsToOne(tmp[tmp.length() - 1]);	// last digit
			res = NumberToChar(value) + res;
			tmp = divide_by_two(tmp);
		}
	}

	return res;
}

string ToBinary::divide_by_two(string num)
{
	string res = "";
	int remain = 0;

	for (unsigned int i = 0; i < num.length(); i++)
	{
		int new_digit = CharToNumber(num[i]) / 2 + remain;
		if (!(i == 0 && new_digit == 0))
			res = res + NumberToChar(new_digit);
		remain = oddsToOne(num[i]) * 5;
	}

	return res;
}

int ToBinary::oddsToOne(char c)
{
	return (CharToNumber(c) % 2 == 1) ? 1 : 0;
}
