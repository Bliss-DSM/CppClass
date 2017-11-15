#include "PointerAddressExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	int i = 0x12345678;
	char *pc = (char*)&i;
	int a = 123;
	int *p = &a;

	cout << "*p = " << *p << endl;
	*p = 789;

	cout << " p = " << p << endl;
	cout << " a = " << a << endl;
	cout << "*p = " << *p << endl;
	cout << hex;
	cout << " (int)*pc = " << (int)*pc << endl;
	cout << "      *pc = " << *pc << endl;

	return 0;
}