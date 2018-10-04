#include "ToBinary.h"
#include "ToDecimal.h"
#include "Operation.h"

int main()
{
	string a, b;
	cout << "Input 1st number: ";
	cin >> a;

	cout << "Input 2nd number: ";
	cin >> b;

	ToBinary tmpA = ToBinary(a);
	ToBinary tmpB = ToBinary(b);

	string value = Operation::OR(tmpA.do_stuff(), tmpB.do_stuff());
	cout << "Converted: " << value << endl;

	ToDecimal tmpC = ToDecimal(value);
	cout << "ToDecimal: " << tmpC.do_stuff() << endl;
	
	system("pause");
	return 0;
}