#include "CinExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2;

	cout << "첫번째 수 입력?: ";
	cin >> num1;
	cout << "두번째 수 입력?: ";
	cin >> num2;
	cout << num1 << "/" << num2 << "의 결과는 " << num1 / num2 << "입니다." << endl;

	return 0;
}

CinExample::CinExample()
{
}


CinExample::~CinExample()
{
}
