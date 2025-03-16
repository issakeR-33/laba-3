#include "MovieSession.h"

using namespace std;

Movie_Session::Movie_Session() : name(""), time(""), date(""), cost(0) {}

Movie_Session::Movie_Session(string n, string t, string d, int c) : name(n), time(t), date(d), cost(c) {}

void Movie_Session::film_info() {
    cout << "Name: " << name << ", Time: " << time << ", Date: " << date << ", Cost: " << cost << "grn" << endl;
}

Movie_Session::~Movie_Session() {
    cout << "The session for this date has been canceled " << date << endl;
}