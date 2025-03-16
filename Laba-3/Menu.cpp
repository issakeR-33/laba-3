#include "Menu.h"

using namespace std;

Menu::Menu() : nameSnack(""), sizeSnack(""), priceSnack(0), nameDrink(""), sizeDrink(0), priceDrink(0) {}

Menu::Menu(string nS, string sS, double pS, string nD, double sD, double pD) : nameSnack(nS), sizeSnack(sS), priceSnack(pS), nameDrink(nD), sizeDrink(sD), priceDrink(pD) {}

Menu::Menu(const Menu& other) {
    nameSnack = other.nameSnack;
    sizeSnack = other.sizeSnack;
    priceSnack = other.priceSnack;
    nameDrink = other.nameDrink;
    sizeDrink = other.sizeDrink;
    priceDrink = other.priceDrink;
    cout << "Here copy of your menu" << endl;
}

void Menu::order() {
    cout << "Snack: " << nameSnack << ". " << "Size " << sizeSnack << ". " << "Price: " << priceSnack << "grn." << endl;
    cout << "Drink: " << nameDrink << ". " << "Size: " << sizeDrink << " " << "Price: " << priceDrink << "grn." << endl;
    cout << "In total: " << priceSnack + priceDrink << "." << endl;

}


Menu::~Menu() {
    cout << "Order was deleted. " << endl;
}