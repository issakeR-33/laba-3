#include "MovieSession.h"
#include "Reserve_Tickets.h"

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

    Menu() : nameSnack(""), sizeSnack(""), priceSnack(0), nameDrink(""), sizeDrink(0), priceDrink(0) {};
    Menu(string nS, string sS, double pS, string nD, double sD, double pD) : nameSnack(nS), sizeSnack(sS), priceSnack(pS), nameDrink(nD), sizeDrink(sD), priceDrink(pD) {};

    void order() {
        cout << "Snack: " << nameSnack << ". " << "Size " << sizeSnack << ". " << "Price: " << priceSnack << "grn." << endl;
        cout << "Drink: " << nameDrink << ". " << "Size: " << sizeDrink << " " << "Price: " << priceDrink << "grn." << endl;
        cout << "In total: " << priceSnack + priceDrink << "." << endl;

    }
    ~Menu() {
        cout << "Order was deleted. " << endl;
    }
};


int main() {
    Movie_Session Film1("Fight Club", "21:00", "29.02.2025", 50);
    Film1.film_info();

    cout << endl;

    Reserve_Tickets reserve1("Vanya'", "Fight club", "29.02.2025", "21:00", 5, 17);
    reserve1.info_about_reserve();

    cout << endl;

    Menu order1("Cheese Pop-Korn", "Medium", 150, "Cola", 0.3, 34.90);
    order1.order();

    cout << endl;
}