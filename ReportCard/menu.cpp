#include <iostream>
using namespace std;

#include "menu.h"

int selectMenu()
{
	int result;

	cout << "------ 메뉴 ------" << endl;
	cout << "1. 학생 성적 추가" << endl;
	cout << "2. 정체 성적 보기" << endl;
	cout << "0. 프로그램 종료" << endl;
	cout << endl;
	cout << "원하는 작업의 번호를 입력하세요 : ";

	cin >> result;

	return result;
}