#include "Freelib.h"

Freelib::Freelib()
        : Freelib{"None", "None"} {}

Freelib::Freelib(std::string new_add)
        : Freelib{new_add, "None"} {}

Freelib::Freelib(std::string new_add, std::string new_name)
        : address(new_add), name(new_name) {}