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

    void info_about_reserve();
    ~Reserve_Tickets();

};

#endif