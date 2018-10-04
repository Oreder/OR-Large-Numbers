#include "ToDecimal.h"

ToDecimal::ToDecimal(string src)
{
	this->src = src;
}

ToDecimal::~ToDecimal()
{
	cout << "ToDecimal is destroyed!\n";
}

string ToDecimal::do_stuff()
{
	string res = "";

	for (int i = 0; i < src.length(); i++)
	{
		res = multiplyByTwo(res);
		res = addToDecimal(res, src[i]);
	}

	return res;
}

string ToDecimal::multiplyByTwo(string src)
{
	string res = "";

	if (src != "")
	{
		int add = 0;

		for (int i = src.length() - 1; i >= 0; i--)
		{
			int value = CharToNumber(src[i]) * 2 + add;
			add = value / 10;

			res = NumberToChar(value % 10) + res;
		}

		if (add > 0)
			res = NumberToChar(add) + res;
	}

	return res;
}

string ToDecimal::addToDecimal(string src, char value)
{
	string res = "";
	int add = CharToNumber(value);

	if (src != "")
	{
		for (int i = src.length() - 1; i >= 0; i--)
		{
			int last = CharToNumber(src[i]) + add;
			add = last / 10;
			res = NumberToChar(last % 10) + res;
		}
	}

	if (add > 0)
		res = NumberToChar(add) + res;

	return res;
}
