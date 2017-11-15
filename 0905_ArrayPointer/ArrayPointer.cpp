#include "ArrayPointer.h"
#include <iostream>
using namespace std;

int main(void)
{
	int nArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = nArray;

	while (p != &nArray[10])
	{
		cout << *p << endl;
		p++;
	}

	p = &nArray[5];
	cout << p << endl;
	p++;
	cout << p << endl;
	cout << &nArray[6] << endl;

	int *p1 = &nArray[3];
	int *p2 = &nArray[7];
	cout << p2 - p1 << endl;

	int(*ap)[10] = &nArray;
	cout << (*ap)[9] << endl;
}

ArrayPointer::ArrayPointer()
{
}


ArrayPointer::~ArrayPointer()
{
}
