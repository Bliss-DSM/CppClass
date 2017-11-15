#include "Point.h"
using namespace std;

class Point
{
public:
	int x, y;
	void Print();
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);
};

Point::Point()
{
}

Point::Point(const Point& pt)
{
	cout << "복사 생성자 호출됨!!" << endl;
	x = pt.x;
	y = pt.y;
}