#include "Book.h"

Book::Book()
        : Book{"None", "None", 0, "None"} {}

Book::Book(std::string new_name)
        : Book{new_name, "None", 0, "None"} {}

Book::Book(std::string new_name, std::string new_author)
        : Book{new_name, new_author, 0, "None"} {}

Book::Book(std::string new_name, std::string new_author, int new_yOfP)
        : Book{new_name, new_author, new_yOfP, "None"} {}

Book::Book(std::string new_name, std::string new_author, int new_yOfP, std::string new_gen)
        : name(new_name), author(new_author), yearsOfPublication(new_yOfP), genre(new_gen) {}

