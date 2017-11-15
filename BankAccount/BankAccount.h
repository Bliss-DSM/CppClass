#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:

	// 생성자
	BankAccount(string _acNum, string _name);
	BankAccount(string _acNum, string _name, int _balance);
	~BankAccount();

	// 예금, 출금
	void Deposit(int money);
	void Withdraw(int money);

	// 출력
	void Print();

	// 접근자
	string GetName();
	void SetInterest(double interest);
	void SetName(string name);

private:

	string acNum;
	string name;
	int balance;
	static double interest;
};

#endif BANKACCOUNT_H