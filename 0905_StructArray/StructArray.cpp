#include "StructArray.h"
#include <iostream>
using namespace std;

int main(void)
{
	struct User
	{
		char userID[20];
		char passwd[20];
		int scores_per_stage[5];
		unsigned long magicPt;
		unsigned long healthPt;
	};

	User users[3] = {
		{ "red", "orange", { 10, 20, 30, 40, 50 }, 60, 70 },
		{ "yellow", "green",{ 80, 90, 100, 110, 120 }, 130, 140 },
		{ "blue", "purple",{ 150, 160, 170, 180, 190 }, 200, 210 }
	};

	for (int i = 0; i < 3; i++)
	{
		cout << users[i].userID << " " << users[i].passwd << " " << users[i].scores_per_stage[0] << " " << users[i].scores_per_stage[1] << " " << users[i].scores_per_stage[2] << " " << users[i].scores_per_stage[3] << " " << users[i].scores_per_stage[4] << " " << users[i].magicPt << " " << users[i].healthPt << endl;
	}
}

StructArray::StructArray()
{
}


StructArray::~StructArray()
{
}
