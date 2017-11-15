#include "Point.h"

class Rect
{
public:
	// ������
	Rect();

	// �Ҹ���
	~Rect();

	// Getter
	Point GetTopLeft() const;
	Point GetBottomRight() const;
	void GetRect(int& left, int& top, int& right, int& bottom);

	// Setter
	void SetTopLeft(const Point& topLeft);
	void SetBottomRight(const Point& bottomRight);
	void SetRect(const int& left, const int& top, const int& right, const int& bottom);

	// ����, ���� ���ϱ�
	int GetWidth() const;
	int GetHeight() const;

	// ���
	void Print() const;

protected:
	Point topLeft;
	Point bottomRight;
};