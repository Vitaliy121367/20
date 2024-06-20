#include "Card.h"

Card::Card()
{
	cardNumber = rand() * pow(10, 10) + rand();
	strcpy_s(name, 50, "undefined");
	strcpy_s(expiredDate, 6, "01/34");
	PIN = rand() % 9999 + 1000;
	cash = 0;
	cout << "Opened STANDART card: " << cardNumber << endl;
}

Card::Card(const char* name, double cash)
{
	cardNumber = rand() * pow(10, 10) + rand();
	strcpy_s(this->name, 50, name);
	strcpy_s(expiredDate, 6, "01/34");
	PIN = rand() % 9999 + 1000;
	this->cash = cash;
	cout << "Opened STANDART card: " << cardNumber << endl;
}

Card::~Card()
{
	cout << "Closed " << cardNumber << " card\n";
}

unsigned long Card::getcardNumber()
{
	return 0;
}

const char* Card::getName()
{
	return nullptr;
}

void Card::setExpiredDate(const char* date)
{
}

const char* Card::getExpiredDate()
{
	return nullptr;
}

void Card::setPIN(int oldPIN, int newPIN)
{
}

int Card::getPIN()
{
	return 0;
}

double Card::getCash()
{
	return 0.0;
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
