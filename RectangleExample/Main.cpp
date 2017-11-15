#include "Rect.h"
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	Rect rect1;
	rect1.Print();

	Point topLeft = rect1.GetTopLeft();
	topLeft.Print();

	Point bottomRight = rect1.GetBottomRight();
	bottomRight.Print();

	int left, top, right, bottom;
	rect1.GetRect(left, top, right, bottom);
	cout << "Left: " << left << ", Top: " << top << ", Right: " << right << ", Bottom: " << bottom << endl;

	rect1.SetTopLeft(Point(10, 10));
	rect1.SetBottomRight(Point(20, 20));
	rect1.Print();

	rect1.SetRect(30, 30, 40, 40);
	rect1.Print();

	cout << "Width: " << rect1.GetWidth() << ", Height: " << rect1.GetHeight() << endl;
	return 0;
}