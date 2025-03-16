#ifndef MENU_H
#define	MENU_H

#include <iostream>
#include <string>

using namespace std;

class Menu {
private:
    string nameSnack;
    string sizeSnack;
    double priceSnack;
    string nameDrink;
    double sizeDrink;
    double priceDrink;
    //double amount;
public:

    Menu();
    Menu(string nS, string sS, double pS, string nD, double sD, double pD);
    void order();
    ~Menu();
};

#endif