#include "Book.h"

Book::Book()
        : Book{"None", "None", 0} {}

Book::Book(std::string new_name)
        : Book{new_name, "None", 0} {}

Book::Book(std::string new_name, std::string new_author)
        : Book{new_name, new_author, 0} {}

Book::Book(std::string new_name, std::string new_author, int new_yOfW)
        : name(new_name), author(new_author), yearsOfWriting(new_yOfW) {}

