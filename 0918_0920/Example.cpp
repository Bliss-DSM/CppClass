#include <iostream>
#include <cmath>
using namespace std;

#include "Example.h"

int main()
{
	double dist_a_b = Distance(a, b);
}

double Distance(Point& p1, Point& p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

Example::Example()
{
}


Example::~Example()
{
}
