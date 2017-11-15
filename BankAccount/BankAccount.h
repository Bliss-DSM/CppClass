#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:

	// ������
	BankAccount(string _acNum, string _name);
	BankAccount(string _acNum, string _name, int _balance);
	~BankAccount();

	// ����, ���
	void Deposit(int money);
	void Withdraw(int money);

	// ���
	void Print();

	// ������
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