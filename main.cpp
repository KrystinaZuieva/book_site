#include <iostream>
#include "Book.h"
#include "Freelib.h"
#include "Reader.h"

int main() {
    Book book_1("The Surgeon", "Tess Gerritsen", 2001, "Crime");
    book_1.displayInfo();
    Freelib freelib_1("Nezalezhnosti Ave", "Bookclub");
    freelib_1.displayIn();
    Reader reader_1("Krystina", "Zuieva", 17, "qwerty");
    reader_1.displayInf();
    return 0;
}
