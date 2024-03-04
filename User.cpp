#include "User.h"

User::User()
        : User{"None", "None", 0} {}

User::User(std::string new_un)
        : User{new_un, "None", 0} {}

User::User(std::string new_un, std::string new_email)
        : User{new_un, new_email, 0} {}

User::User(std::string new_un, std::string new_email, int new_age)
        : username(new_un), email(new_email), age(new_age) {}

