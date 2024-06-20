#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Card
{
	unsigned long cardNumber;
	char name[50];
	char expiredDate[6];
	int PIN;
	double cash;

public:
	Card();
	Card(const char* name, double cash);
	~Card();
	//set get
	unsigned long getcardNumber();
	const char* getName();
	void setExpiredDate(const char* date);
	const char* getExpiredDate();
	void setPIN(int oldPIN, int newPIN);
	int getPIN();
	double getCash();

	void showInfo();
	void topupCash(int pin, double mony);
	void withdrawCash(int pin, double mony);
};

