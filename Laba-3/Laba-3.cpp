#include "MovieSession.h"
#include "Reserve_Tickets.h"
#include "Menu.h"

using namespace std;

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