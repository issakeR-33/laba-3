#include "MovieSession.h"

using namespace std;

Movie_Session::Movie_Session() : name(""), time(""), date(""), cost(0) {}

Movie_Session::Movie_Session(string n, string t, string d, int c) : name(n), time(t), date(d), cost(c) {}

Movie_Session::Movie_Session(const Movie_Session& other){
    this->name = other.name;
    this->time = other.time;
    this->date = other.date;
    this->cost = other.cost;
    cout << "Copy of Session " << name << endl;
}

Movie_Session::Movie_Session(Movie_Session&& other) : name(move(other.name)), time(other.time), date(other.date), cost(other.cost) {
    cout << "Session was moved on Thusday";
}

void Movie_Session::film_info() {
    cout << "Name: " << name << ", Time: " << time << ", Date: " << date << ", Cost: " << cost << "grn" << endl;
}

Movie_Session::~Movie_Session() {
    cout << "The session for this date has been canceled " << date << endl;
}