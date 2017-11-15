#include "BankAccount.h"

// static
double BankAccount::interest = 0.1;

// ������
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

// ����, ���
void BankAccount::Deposit(int money)
{
	balance += money;
}

void BankAccount::Withdraw(int money)
{
	balance -= money;
}

// ���
void BankAccount::Print()
{
	balance += (int)(balance * interest);

	cout << endl;
	cout << "--------------------" << endl;
	cout << "���¹�ȣ: " << acNum << endl;
	cout << "�̸�: " << name << endl;
	cout << "�ܾ�: " << balance << endl;
	cout << "--------------------" << endl;
	cout << endl;
}

// ������
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