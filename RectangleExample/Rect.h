#include "Point.h"

class Rect
{
public:
	// 생성자
	Rect();

	// 소멸자
	~Rect();

	// Getter
	Point GetTopLeft() const;
	Point GetBottomRight() const;
	void GetRect(int& left, int& top, int& right, int& bottom);

	// Setter
	void SetTopLeft(const Point& topLeft);
	void SetBottomRight(const Point& bottomRight);
	void SetRect(const int& left, const int& top, const int& right, const int& bottom);

	// 가로, 세로 구하기
	int GetWidth() const;
	int GetHeight() const;

	// 출력
	void Print() const;

protected:
	Point topLeft;
	Point bottomRight;
};