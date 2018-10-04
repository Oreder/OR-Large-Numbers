#pragma once
#include <string>
#include <iostream>
using namespace std;

class Operation
{
public:
	static string OR(string b1, string b2);

private:
	static char rule(char c1, char c2);
};

