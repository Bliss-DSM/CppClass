#include <iostream>
using namespace std;

#include "students.h"
#include "menu.h"

int main(void)
{
	int menu;
	bool flag = true;
	Student* head = NULL;

	while (flag)
	{
		
		menu = selectMenu();

		switch (menu)
		{
		case 1: add(head); break;
		case 2: show(head); break;
		case 0: flag = false; break;
		}
	}

	return 0;
}