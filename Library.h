#ifndef BOOK_LIB_MANAG_LIBRARY_H
#define BOOK_LIB_MANAG_LIBRARY_H

#include <iostream>
#include <string>

using namespace std;

class Library {
private:
    string address;
    string name;
public:
    Library();

    Library(string new_add);

    Library(string new_add, string new_name);

    ~Library() {};

    void displayIn() {
        cout << "Address: " << address << endl
             << "Name: " << name << endl;
    }
};

#endif