#ifndef BOOK_LIB_MANAG_BOOK_H
#define BOOK_LIB_MANAG_BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string name;
    string author;
    int yearsOfWriting;
public:
    Book();

    Book(string new_name);

    Book(string new_name, string new_author);

    Book(string new_name, string new_author, int new_yOfW);

    ~Book() {};

    void displayInfo() {
        cout << "Name: " << name << endl
             << "Author: " << author << endl
             << "Years of writing: " << yearsOfWriting << endl;
    }
};

#endif
