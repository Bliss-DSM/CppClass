#pragma once

class Point
{
public:
	enum { MIN_X = 0, MAX_X = 100, MIN_Y = 0, MAX_Y = 100 };
	using COOR_T = int;

	// ������
	Point();
	Point(COOR_T, COOR_T);

	// �Ҹ���
	~Point();

	// Getter, Setter
	COOR_T GetX() const;
	COOR_T GetY() const;
	void SetX(const COOR_T&);
	void SetY(const COOR_T&);

	// ���
	void Print() const;

private:
	COOR_T x, y;
};