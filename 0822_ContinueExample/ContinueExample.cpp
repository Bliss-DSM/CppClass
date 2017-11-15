#include "ContinueExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		if (i == 5) continue;
		sum += i;

		cout << "현재 i의 값: " << i << endl;
	}

	cout << "1 ~ 4, 6 ~ 10까지의 합: " << sum << endl;

	return 0;
}


ContinueExample::ContinueExample()
{
}


ContinueExample::~ContinueExample()
{
}
