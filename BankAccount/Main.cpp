#include <iostream>
using namespace std;

#include "BankAccount.h"

int main(void)
{
	BankAccount account1("123-456", "Bliss");
	BankAccount account2("234-567", "Joy", 20000);

	account1.Print();
	account2.Print();

	cout << "GETNAME: " << account1.GetName() << endl;
	cout << "GETNAME: " << account2.GetName() << endl;

	account1.SetName("Ironside");
	account2.SetName("Jang");

	cout << "GETNAME: " << account1.GetName() << endl;
	cout << "GETNAME: " << account2.GetName() << endl;

	account1.SetInterest(0.2);

	account1.Print();
	account2.Print();

	account2.SetInterest(0.3);

	account1.Print();
	account2.Print();

	account1.Deposit(20000);
	account2.Deposit(30000);

	account1.Print();
	account2.Print();

	account1.Withdraw(40000);
	account2.Withdraw(80000);

	account1.Print();
	account2.Print();
}