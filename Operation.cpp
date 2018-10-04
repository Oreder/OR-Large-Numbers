#include "Operation.h"

string Operation::OR(string b1, string b2)
{
	string res = "";

	string min = b1, max = b2;
	if (b1.length() > b2.length())
	{
		min = b2; 
		max = b1;
	}
	
	int minLength = min.length(),
		maxLength = max.length();

	// apply for uncross-part
	for (unsigned int i = 0; i < maxLength - minLength; i++)
	{
		res += max[i];
	}

	// apply for the same length path
	for (unsigned int i = 0; i < minLength; i++)
	{
		res += rule(max[maxLength - minLength + i], min[i]);
	}

	return res;
}

char Operation::rule(char c1, char c2)
{
	if (c1 == '0' && c2 == '0')
		return '0';
	return '1';
}
