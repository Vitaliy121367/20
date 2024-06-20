#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include "Card.h"
using namespace std;

int main()
{
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Card* mono = nullptr;
    bool user;
    cout << "0 - standart card\n";
    cout << "1 - VIP card\n";
    cin >> user;
    if (user == 0)
    {
        mono = new Card();
    }
    else
    {
        mono = new Card("Bondarenko Vitaliy", 25000);
    }

    mono->showInfo();

    cout << "\n\n======================================================\n\n";

    int a, b;
    cout << "Input old pin: ";
    cin >> a;
    cout << "Input new pin: ";
    cin >> b;
    mono->setPIN(a, b);
    cout << "\nCard: " << mono->getcardNumber() << "\nPIN: " << mono->getPIN() << "\n\n";

    cout << "\n\n======================================================\n\n";

    cout << "Input pin: ";
    cin >> a;
    cout << "Input money to topup: ";
    cin >> b;
    mono->topupCash(a, b);
    cout << "\nCard: " << mono->getcardNumber() << "\nCash: " << mono->getCash() << "\n\n";
    
    cout << "Input pin: ";
    cin >> a;
    cout << "Input money to withdraw cash: ";
    cin >> b;
    mono->withdrawCash(a, b);
    cout << "\nCard: " << mono->getcardNumber() << "\nCash: " << mono->getCash() << "\n\n";

    delete mono;
    return 0;
}