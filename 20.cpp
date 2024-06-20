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

    delete mono;
    return 0;
}