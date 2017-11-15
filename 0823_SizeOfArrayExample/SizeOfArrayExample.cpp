#include "SizeOfArrayExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	char cArray[3] = { 'A', 'B', 'C' };
	int iArray[4] = { 100, 200, 300, 400 };

	cout << "sizeof(cArray) = " << sizeof(cArray) << " (Bytes)" << endl;
	cout << "sizeof(cArray[0]) = " << sizeof(cArray[0]) << " (Bytes)" << endl;
	cout << "원소의 개수 = " << sizeof(cArray) / sizeof(cArray[0]) << "\n" << endl;

	cout << "sizeof(iArray) = " << sizeof(iArray) << " (Bytes)" << endl;
	cout << "sizeof(iArray[0]) = " << sizeof(iArray[0]) << " (Bytes)" << endl;
	cout << "원소의 개수 = " << sizeof(iArray) / sizeof(iArray[0]) << "\n" << endl;

	return 0;
}

SizeOfArrayExample::SizeOfArrayExample()
{
}


SizeOfArrayExample::~SizeOfArrayExample()
{
}
