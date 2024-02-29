#include <iostream>
#include "Book.h"
#include "Library.h"
#include "Reader.h"

int main() {
    Book book_1("The Surgeon", "Tess Gerritsen", 2001);
    book_1.displayInfo();
    Library library_1("Nezalezhnosti Ave", "Bookclub");
    library_1.displayIn();
    Reader reader_1("Krystina", "Zuieva", 17);
    reader_1.displayInf();
    return 0;
}
