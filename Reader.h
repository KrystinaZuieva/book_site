#ifndef BOOK_LIB_MANAG_READER_H
#define BOOK_LIB_MANAG_READER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Reader {
private:
    string name;
    string surname;
    int age;
public:
    Reader();
    Reader(string new_name);
    Reader(string new_name, string new_sur);
    Reader(string new_name, string new_sur, int new_age);
   ~Reader() {};
   void displayInf() {
       cout << "Name: " << name << endl
       << "Surname: " << surname << endl
       << "Age: " << age << endl;
   }
};

#endif
