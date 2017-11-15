#pragma once

class Point
{
public:
	enum { MIN_X = 0, MAX_X = 100, MIN_Y = 0, MAX_Y = 100 };
	using COOR_T = int;

	// 생성자
	Point();
	Point(COOR_T, COOR_T);

	// 소멸자
	~Point();

	// Getter, Setter
	COOR_T GetX() const;
	COOR_T GetY() const;
	void SetX(const COOR_T&);
	void SetY(const COOR_T&);

	// 출력
	void Print() const;

private:
	COOR_T x, y;
};