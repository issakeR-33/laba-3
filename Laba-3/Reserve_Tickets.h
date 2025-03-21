#ifndef RESERVE_TICKETS_H
#define RESERVE_TICKETS_H

#include <iostream>
#include <string>

using namespace std;

class Reserve_Tickets {
private:
    string nameClient;
    string nameMovie;
    string dateMovie;
    string timeMovie;
    int numberRow;
    int numberSit;

public:
    Reserve_Tickets();
    Reserve_Tickets(string nC, string m, string d, string nM, int R, int S);
    Reserve_Tickets(const Reserve_Tickets& other);
    //void info_about_reserve();
    friend ostream& operator<<(ostream& os, const Reserve_Tickets& ticket);
    Reserve_Tickets& operator-();
    Reserve_Tickets& operator+=(int extraSeats);
    ~Reserve_Tickets();

};

#endif