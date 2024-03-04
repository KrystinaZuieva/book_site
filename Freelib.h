#ifndef BOOK_LIB_MANAG_FREELIB_H
#define BOOK_LIB_MANAG_FREELIB_H

#include <iostream>
#include <string>

using namespace std;

class Freelib {
private:
    string text;
public:
    Freelib();

    Freelib(string new_text);

    ~Freelib() {};

    void addText(const string &appendText) {
        text += appendText;
    }

    void clearText() {
        text = "";
    }

    void readingText() {
        cout << "Reading text: " << text << endl;
    }
};

#endif