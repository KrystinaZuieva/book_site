#ifndef BOOK_LIB_MANAG_USER_H
#define BOOK_LIB_MANAG_USER_H

#include <iostream>
#include <string>

using namespace std;

class User {
private:
    string username;
    string email;
    int age;
public:
    User();

    User(string new_un);

    User(string new_un, string new_email);

    User(string new_un, string new_email, int new_age);

    ~User() {};

    void displayInfo() {
        cout << "Surname: " << username << endl
             << "Email: " << email << endl
             << "Age: " << age << endl
             << "-----------------------------------------" << endl;
    }
};

#endif
