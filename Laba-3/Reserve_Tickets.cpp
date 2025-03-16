#include "Reserve_Tickets.h"	

using namespace std;

Reserve_Tickets::Reserve_Tickets()
	:nameClient(""), nameMovie(""), dateMovie(""), timeMovie(""), numberRow(0), numberSit(0) {}

Reserve_Tickets::Reserve_Tickets(string nC, string m, string d, string nM, int R, int S) 
	: nameClient(nC), nameMovie(m), dateMovie(d), timeMovie(nM), numberRow(R), numberSit(S) {}

Reserve_Tickets::Reserve_Tickets(const Reserve_Tickets& other) {
	nameClient = other.nameClient;
	nameMovie = other.nameMovie;
	dateMovie = other.dateMovie;
	timeMovie = other.timeMovie;
	numberRow = other.numberRow;
	numberSit = other.numberSit;
	cout << "Your Copy of Ticket" << endl;
}

//void Reserve_Tickets::info_about_reserve() {
//	cout << "Your name: " << nameClient << "." << endl;
//	cout << "Movie: " << nameMovie << "." << endl;
//	cout << "Reserve on: " << dateMovie << " " << "Time: " << timeMovie << "." << endl;
//	cout << "Your place: " << "Row: " << numberRow << " " << "Sit: " << numberSit << "." << endl;
//}

ostream& operator<<(ostream& os, const Reserve_Tickets& ticket) {
	os << endl;
	os << "Name: " << ticket.nameClient << endl;
	os << "Film: " << ticket.nameMovie << endl;
	os << "Date: " << ticket.dateMovie << endl;
	os << "Time: " << ticket.timeMovie << endl;
	os << "Row: " << ticket.numberRow << ", Sit: " << ticket.numberSit << endl;
	return os;
}


Reserve_Tickets::~Reserve_Tickets() {
		cout << "Done! You reserve was deleted." << endl;
	}