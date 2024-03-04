#include <iostream>
#include "Book.h"
#include "Freelib.h"
#include "User.h"

int main() {
    User user_1("kriistiiinnaa", "kristina13zk@gmail.com", 17);
    user_1.displayInfo();
    Book book_1("The Surgeon", "Tess Gerritsen", 2001, "Crime");
    book_1.displayInfo();
    Freelib freelib;
    freelib.addText("According to her,she was raped in May,and killed in July.");
    freelib.addText("What a beautiful world for women,isn't it?");
    //freelib.clearText();
    freelib.readingText();
    return 0;
}
