#include "StringReverse.h"
#include <iostream>
using namespace std;

int main(void)
{
	char example[] = "scientia est potentia";
	char length = sizeof(example) / sizeof(example[0]) - 1;

	for (int i = length - 1; i >= 0; i--)
	{
		cout << example[i];
	}

	cout << endl;
}

StringReverse::StringReverse()
{
}


StringReverse::~StringReverse()
{
}
