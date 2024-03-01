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
    string password;
public:
    Reader();
    Reader(string new_name);
    Reader(string new_name, string new_sur);
    Reader(string new_name, string new_sur, int new_age);
    Reader(string new_name, string new_sur, int new_age, string new_pass);
   ~Reader() {};
   void displayInf() {
       cout << "Name: " << name << endl
       << "Surname: " << surname << endl
       << "Age: " << age << endl
       << "Password: " << password << endl;
   }
};

#endif
