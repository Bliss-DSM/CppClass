#include <iostream>
using namespace std;

class Class
{
private:
	int variable;

public:
	Class(int _variable)
	{
		variable = _variable;
	}

	Class operator- (int integer) const
	{
		Class ret(this->variable - integer);
		return ret;
	}

	int getVar()
	{
		return variable;
	}

	friend Class operator/ (const Class& c1, const Class& c2);
	friend Class operator* (const Class& c1, const Class& c2);
};

Class operator/ (const Class& c1, const Class& c2)
{
	Class ret(c1.variable / c2.variable);
	return ret;
}

Class operator* (const Class& c1, const Class& c2)
{
	Class ret(c1.variable * c2.variable);
	return ret;
}

int main(void)
{
	Class a(6), b(3);
	
	Class class1 = a - 5;
	Class class2 = a / b;
	Class class3 = a * b;

	cout << "a - 5 = " << class1.getVar() << endl;
	cout << "a / b = " << class2.getVar() << endl;
	cout << "a * b = " << class3.getVar() << endl;

	return 0;
}