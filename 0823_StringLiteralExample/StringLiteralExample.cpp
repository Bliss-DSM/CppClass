#include "StringLiteralExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	char cArray1[] = "ABCDE";
	char cArray2[] = { 'A', 'B', 'C', 'D', 'E', 0 };

	cout << "sizeof(cArray1) = " << sizeof(cArray1) << " (Bytes)" << endl;
	cout << "sizeof(cArray2) = " << sizeof(cArray2) << " (Bytes)" << endl;

	cout << cArray1[4] << (int)cArray1[5] << endl;
	cout << cArray2[4] << (int)cArray2[5] << endl;
}

StringLiteralExample::StringLiteralExample()
{
}

StringLiteralExample::~StringLiteralExample()
{
}
