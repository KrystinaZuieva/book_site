#include "Book.h"

Book::Book()
        : Book{"None", "None", 0, "None"} {}

Book::Book(std::string new_name)
        : Book{new_name, "None", 0, "None"} {}

Book::Book(std::string new_name, std::string new_author)
        : Book{new_name, new_author, 0, "None"} {}

Book::Book(std::string new_name, std::string new_author, int new_yOfW)
        :Book{new_name, new_author, new_yOfW, "None"} {}

Book::Book(std::string new_name, std::string new_author, int new_yOfW, std::string new_gen)
        : name(new_name), author(new_author), yearsOfWriting(new_yOfW), genre(new_gen) {}

