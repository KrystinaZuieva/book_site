#ifndef BOOK_LIB_MANAG_FREELIB_H
#define BOOK_LIB_MANAG_FREELIB_H

#include <iostream>
#include <string>

using namespace std;

class Freelib {
private:
    string address;
    string name;
public:
    Freelib();

    Freelib(string new_add);

    Freelib(string new_add, string new_name);

    ~Freelib() {};

    void displayIn() {
        cout << "Address: " << address << endl
             << "Name: " << name << endl;
    }
};

#endif