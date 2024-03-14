#ifndef BOOK_LIB_MANAG_BOOK_H
#define BOOK_LIB_MANAG_BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string name;
    string author;
    int yearsOfPublication;
    string genre;
    static int counter;
public:
    static int getCounter();

    Book(const Book &other);

    Book();

    Book(string new_name);

    Book(string new_name, string new_author);

    Book(string new_name, string new_author, int new_yOfP);

    Book(string new_name, string new_author, int new_yOfP, string new_gen);

    ~Book();

    void displayInfo() {
        cout << "Name: " << name << endl
             << "Author: " << author << endl
             << "Years of publication: " << yearsOfPublication << endl
             << "Genre: " << genre << endl;
    }
};

#endif
