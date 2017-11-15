#include "Point.h"
#include <iostream>
using namespace std;

// 생성자
Point::Point() : x(0), y(0)
{
	cout << "Point constructor is called. (default)" << endl;
}

Point::Point(COOR_T _x, COOR_T _y)
{
	x = _x;
	y = _y;
	cout << "Point constructor is called. (two params)" << endl;
}
// 소멸자
Point::~Point()
{
	cout << "Point distructor is called." << endl;
}

// Getter, Setter
Point::COOR_T Point::GetX() const
{
	return x;
}

Point::COOR_T Point::GetY() const
{
	return y;
}

void Point::SetX(const COOR_T& value)
{
	if (value < MIN_X)
		x = MIN_X;

	else if (value > MAX_X)
		x = MAX_X;

	else
		x = value;
}

void Point::SetY(const COOR_T& value)
{
	if (value < MIN_X)
		y = MIN_Y;

	else if (value > MAX_X)
		y = MAX_Y;

	else
		y = value;
}

// 출력
void Point::Print() const
{
	cout << "X = " << GetX() << ", Y = " << GetY() << endl;
}