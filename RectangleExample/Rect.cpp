#include "Rect.h"
#include <iostream>
using namespace std;

// 생성자
Rect::Rect() : topLeft(Point(0, 0)), bottomRight(Point(1, 1))
{
	cout << "Rect constructor is called. (default)" << endl;
}

// 소멸자
Rect::~Rect()
{
	cout << "Rect destructor is called." << endl;
}

//Getter
Point Rect::GetTopLeft() const
{
	return topLeft;
}

Point Rect::GetBottomRight() const
{
	return bottomRight;
}

void Rect::GetRect(int& left, int& top, int& right, int& bottom)
{
	left = topLeft.GetX();
	top = topLeft.GetY();
	right = bottomRight.GetX();
	bottom = bottomRight.GetY();
}

// Setter
void Rect::SetTopLeft(const Point& _topLeft)
{
	topLeft = _topLeft;
}

void Rect::SetBottomRight(const Point& _bottomRight)
{
	bottomRight = _bottomRight;
}

void Rect::SetRect(const int& left, const int& top, const int& right, const int& bottom)
{
	topLeft.SetX(left);
	topLeft.SetY(top);
	bottomRight.SetX(right);
	bottomRight.SetY(bottom);
}

// 가로, 세로 구하기
int Rect::GetWidth() const
{
	return bottomRight.GetX() - topLeft.GetX();
}

int Rect::GetHeight() const
{
	return bottomRight.GetY() - topLeft.GetY();
}

// 출력
void Rect::Print() const
{
	cout << "Left: " << topLeft.GetX() << ", Top: " << topLeft.GetY() << ", Right: " << bottomRight.GetX() << ", Bottom: " << bottomRight.GetY() << endl;
}