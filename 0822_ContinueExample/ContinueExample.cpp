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

		cout << "���� i�� ��: " << i << endl;
	}

	cout << "1 ~ 4, 6 ~ 10������ ��: " << sum << endl;

	return 0;
}


ContinueExample::ContinueExample()
{
}


ContinueExample::~ContinueExample()
{
}
