#include <iostream>
#include <string>
using namespace std;

class Point
{
public:
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);
	void Print();
	void SetX(int x);
	void SetY(int y);
	int GetX();
	int GetY();

private:
	int x, y;
};

Point::Point()
{
}

Point::Point(int initialX, int initialY)
{
	x = initialX;
	y = initialY;
}

Point::Point(const Point& pt)
{
	cout << "복사 생성자 호출됨!!" << endl;
	x = pt.x;
	y = pt.y;
}

void Point::Print()
{
	cout << "x: " << x << " y: " << y << endl;
}

void Point::SetX(int x)
{
	if (x < 0) x = 0;
	else if (x > 100) x = 100;

	this->x = x;
}

void Point::SetY(int y)
{
	if (y < 0) y = 0;
	else if (y > 100) y = 100;

	this->y = y;
}

int Point::GetX()
{
	return this->x;
}

int Point::GetY()
{
	return this->y;
}

class NeedConstructor
{
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
};

NeedConstructor::NeedConstructor() : maxCount(100), ref(sample)
{
	sample = 200;
}

class DynamicArray
{
public:
	int* arr;

	DynamicArray(int arraySize);
	~DynamicArray();
};

DynamicArray::DynamicArray(int arraySize)
{
	arr = new int[arraySize];
}

DynamicArray::~DynamicArray()
{
	cout << "소멸자 호출" << endl;
	delete[] arr;
	arr = NULL;
}

class AccessControl
{
public:
	char publicData;
	void publicFunc() {};

protected:
	int protectedData;
	void protectedFunc() {};

private:
	float privateData;
	void privateFunc() {};
};

class Student
{
public:
	string name;
	int sNo;
	Student(const string& name_arg, int stdNumber);
	~Student();

	static int student_count;
	static void PrintStdCount();
};

int Student::student_count = 0;

void Student::PrintStdCount()
{
	cout << "Student 객체 수 = " << student_count << endl;
}

Student::Student(const string& name_arg, int stdNumber)
{
	student_count++;

	name = name_arg;
	sNo = stdNumber;
}

Student::~Student()
{
	student_count--;
}

void Func()
{
	Student std1("Bill", 342);
	Student std2("James", 214);
	
	Student::PrintStdCount();
}

class WhoAmI
{
public:
	int id;

	WhoAmI(int id_arg);
	void ShowYourself() const;
};

WhoAmI::WhoAmI(int id_arg)
{
	id = id_arg;
}

void WhoAmI::ShowYourself() const
{
	cout << "{ ID = " << id << ", this = " << this << " }\n";
}

// -------------------- 객체 배열 시작 --------------------

class Player
{
private:
	int posX;
	int posY;
	string weapon;

public:
	Player();
	Player(int, int);
	Player(int, int, string);

	void Print() const;
};

Player::Player() : posX(0), posY(0), weapon("Sword")
{

}

Player::Player(int _posX, int _posY) : weapon("Sword")
{
	posX = _posX;
	posY = _posY;
}

Player::Player(int _posX, int _posY, string _weapon)
{
	posX = _posX;
	posY = _posY;
	weapon = _weapon;
}

void Player::Print() const
{
	cout << "X: " << posX << ", Y: " << posY << ", Weapon: " << weapon << endl;
}

// -------------------- 객체 배열 끝   --------------------

class Same
{
private:
	int num1;
	int num2;
public:
	Same(int, int);
	void Equal1(int, int);
	void Equal2(int, int);
	void Show();
};

Same::Same(int a, int b) : num1(a), num2(b)
{

}

void Same::Show()
{
	cout << "num1: " << num1 << ", num2: " << num2 << endl;
}

void Same::Equal1(int num1, int num2)
{
	this->num1 = num1;
	this->num2 = num2;
}

void Same::Equal2(int num1, int num2)
{
	num1 = num1;
	num2 = num2;
}

class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date();
	Date(int, int, int);

	int GetYear();
	int GetMonth();
	int GetDay();

	void SetYear(int);
	void SetMonth(int);
	void SetDay(int);
};

Date::Date() : year(2017), month(1), day(1)
{

}

Date::Date(int _year, int _month, int _day)
{
	year = _year;
	month = _month;
	day = _day;
}

int Date::GetYear()
{
	return year;
}

int Date::GetMonth()
{
	return month;
}

int Date::GetDay()
{
	return day;
}

void Date::SetYear(int _year)
{
	year = _year;
}

void Date::SetMonth(int _month)
{
	month = _month;
}

void Date::SetDay(int _day)
{
	day = _day;
}

void Print(Date date)
{
	cout << date.GetYear() << "년 " << date.GetMonth() << "월 " << date.GetDay() << "일" << endl;
}

class Temp
{
private:
	int temp;
public:
	Temp(int);
	Temp(const Temp&);
	~Temp();
	int getTemp();
};

Temp::Temp(int _temp)
{
	temp = _temp;
	cout << "생성자" << endl;
}

Temp::Temp(const Temp& temp)
{
	cout << "복사 생성자" << endl;
}

Temp::~Temp()
{
	cout << "소멸자" << endl;
}

int Temp::getTemp()
{
	return temp;
}

class SS
{
private:
	int num;
public:
	SS(int n) : num(n)
	{
		cout << "SS(int n) 호출: 주소: " << this << endl;
	}
	SS(const SS& copy) : num(copy.num)
	{
		cout << "SS(const SS& copy) 호출: 주소: " << this << endl;
	}
	~SS()
	{
		cout << "~SS() 호출: 주소: " << this << endl;
	}
};

SS SsFunc(SS ob)
{
	cout << "return 전" << endl;
	return ob;
}

class Parent
{
private:
	int priv = 0;
protected:
	int prot = 0;
public:
	int pub = 0;
};

class Child : protected Parent
{
public:
	void AccessParents()
	{
		int n;
		// n = priv;
		n = prot;
		n = pub;
	}
};

class GrandChild : public Child
{
public:
	void AccessParents()
	{
		int n;
		//n = priv;
		n = prot;
		n = pub;
	}
};

int PlayerMain()
{
	// 스택에 할당

	Player player1[3];

	cout << "[ player1 ]" << endl;

	for (int i = 0; i < 3; i++)
	{
		player1[i].Print();
	}

	cout << endl;

	Player player2[3] = { Player(), Player(1, 1), Player(3, 3, "Dagger") };

	cout << "[ player2 ]" << endl;

	for (int i = 0; i < 3; i++)
	{
		player2[i].Print();
	}

	// 힙에 할당

	Player* player3 = new Player[3];

	cout << "[ player3 ]" << endl;

	for (int i = 0; i < 3; i++)
	{
		player3[i].Print();
	}

	cout << endl;

	Player* player4;

	delete[] player3;

	return 0;
}

class _Point
{
private:
	int val_x;
	int val_y;
public:
	_Point(int x, int y)
	{
		val_x = x;
		val_y = y;
	}

	friend void Reset(_Point &M);

	void Disp()
	{
		cout << val_x << "," << val_y << endl;
	}
};

//class _Student
//{
//	friend void show(_Student s, _Professor p);
//	int id;
//
//public:
//	_Student(int id)
//	{
//		this->id = id;
//	}
//};
//
//class _Professor
//{
//	friend void show(_Student s, _Professor p);
//	string name;
//
//public:
//	_Professor(string name)
//	{
//		this->name = name;
//	}
//};
//
//void show(_Student s, _Professor p)
//{
//	cout << "아이디: " << s.id << "	이름: " << p.name << endl;
//}
 
void Reset(_Point &M)
{
	M.val_x = 0;
	M.val_y = 0;
}

class Circle
{
private:
	int radius;

public:
	Circle(int radius)
	{
		cout << "Circle(int radius)" << endl;
		this->radius = radius;
	}

	Circle(const Circle& copy) : radius(copy.radius)
	{
		cout << "Circle(const Circle& copy) 호출: 주소: " << this << endl;
	}

	~Circle()
	{
		cout << "~Circle()" << endl;
	}

	void showInfo()
	{
		cout << "radius : " << radius << endl;
	}

	//void operator+(int value)
	//{
	//	radius = radius + value;
	//}

	//Circle operator+ (const Circle& c) const
	//{
	//	Circle tempCircle(this->radius + c.radius);
	//	return tempCircle;
	//}

	friend Circle operator+ (const Circle& c1, const Circle& c2);
};

Circle operator+(const Circle& c1, const Circle& c2)
{
	Circle tempCircle(c1.radius + c2.radius);
	return tempCircle;
}

class __Point
{
private:
	int x, y;
public:
	__Point(int x = 0, int y = 0) : x(x), y(y) {}
	void Showdata();
	__Point& operator++();
	__Point operator++(int);
};

void __Point::Showdata()
{
	cout << x << " " << y << endl;
}

__Point& __Point::operator++()
{
	x++;
	y++;
	return *this;
}

__Point __Point::operator++(int)
{
	__Point tmp(x, y);
	x++;
	y++;
	return tmp;
}

//class Shape
//{
//public:
//	void Move(double x, double y);
//	void Draw() const;
//
//	Shape();
//	Shape(double x, double y);
//protected:
//	double _x, _y;
//};
//
//void Shape::Draw() const
//{
//	cout << "[Shape] Position = ( " << _x << ", " << _y << ")" << endl;
//}
//
//class Rectangle : public Shape
//{
//public:
//	void Draw() const;
//	void Resize(double width, double height);
//
//	Rectangle();
//	Rectangle(double x, double y, double width, double height);
//protected:
//	double _width;
//	double _height;
//};
//
//void Rectangle::Draw() const
//{
//	cout << "[Rectangle] Position = { " << _x << ", " << _y << ")" << endl;
//	cout << "Size = ( " << _width << ", " << _height << ")" << endl;
//}
//
//class Circle : public Shape
//{
//public:
//	void Draw() const;
//	void SetRadius(double radius);
//
//	Circle();
//	Circle(double x, double y, double radius);
//
//protected:
//	double _radius
//};
//
//void Circle::Draw() const
//{
//	cout << "[Circle] Position = { " << _x << ", " << _y << ")" << endl;
//	cout << "Radius = " << _radius << endl;
//}

int main(void)
{
	
}

// 복사 생성자가 언제 호출되는가?
// 임시 변수가 무엇인가?
// Call by Value와 Call by Reference
// 상속의 접근 지정자
// friend 메서드