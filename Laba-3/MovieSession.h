#ifndef MOVIE_SESSION_H
#define MOVIE_SESSION_H

#include <iostream>
#include <string>

using namespace std;

class Movie_Session {
private:
    string name;
    string time;
    string date;
    int cost;

public:
    Movie_Session();
    Movie_Session(string n, string t, string d, int c);

    ~Movie_Session();

    void film_info();
};

#endif