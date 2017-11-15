#include "StringAndCharArrayExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	char thisIsNotString[] = { 'H', 'E', 'L', 'L', 'O' };
	char thisIsString[] = { 'H', 'E', 'L', 'L', 'O', '\0' };

	cout << thisIsNotString << endl;
	cout << thisIsString << endl;
}

StringAndCharArrayExample::StringAndCharArrayExample()
{
}


StringAndCharArrayExample::~StringAndCharArrayExample()
{
}
