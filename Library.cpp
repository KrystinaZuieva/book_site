#include "Library.h"

Library::Library()
        : Library{"None", "None"} {}

Library::Library(std::string new_add)
        : Library{new_add, "None"} {}

Library::Library(std::string new_add, std::string new_name)
        : address(new_add), name(new_name) {}