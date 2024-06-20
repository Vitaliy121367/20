#include "Card.h"

Card::Card()
{
	cardNumber = rand() * pow(10, 10) + rand();
	strcat_s(name, 50, "undefined");
	strcat_s(expiredDate, 6, "01/34");
	PIN = rand() % 9999 + 1000;
	cash = 0;
	cout << "Opened STANDART card: " << cardNumber << endl;
}

Card::Card(const char* name, double cash)
{
	cardNumber = rand() * pow(10, 10) + rand();
	strcat_s(this->name, 50, "undefined");
	strcat_s(expiredDate, 6, "01/34");
	PIN = rand() % 9999 + 1000;
	this->cash = cash;
	cout << "Opened STANDART card: " << cardNumber << endl;
}

Card::~Card()
{
	cout << "Closed " << cardNumber << " card\n";
}

void Card::showInfo()
{
	cout << "+----------------------------------------------------+\n";
	cout << "| \t Card:     " << cardNumber << endl;
	cout << "| \t Client:   " << name << endl;
	cout << "| \t Exp date: " << expiredDate << endl;
	cout << "+----------------------------------------------------+\n";
	cout << "| \t Pin:      " << PIN << endl;
	cout << "| \t Cash:     " << cash<< endl;
	cout << "+----------------------------------------------------+\n";
}
