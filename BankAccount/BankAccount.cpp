#include "BankAccount.h"

// static
double BankAccount::interest = 0.1;

// 생성자
BankAccount::BankAccount(string _acNum, string _name) : balance(10000)
{
	acNum = _acNum;
	name = _name;
	
}

BankAccount::BankAccount(string _acNum, string _name, int _balance)
{
	acNum = _acNum;
	name = _name;
	balance = _balance;
}

BankAccount::~BankAccount()
{

}

// 예금, 출금
void BankAccount::Deposit(int money)
{
	balance += money;
}

void BankAccount::Withdraw(int money)
{
	balance -= money;
}

// 출력
void BankAccount::Print()
{
	balance += (int)(balance * interest);

	cout << endl;
	cout << "--------------------" << endl;
	cout << "계좌번호: " << acNum << endl;
	cout << "이름: " << name << endl;
	cout << "잔액: " << balance << endl;
	cout << "--------------------" << endl;
	cout << endl;
}

// 접근자
string BankAccount::GetName()
{
	return name;
}

void BankAccount::SetInterest(double interest)
{
	this->interest = interest;
}

void BankAccount::SetName(string name)
{
	this->name = name;
}