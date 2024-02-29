#include "Reader.h"

Reader::Reader()
        : Reader{"None", "None", 0} {}

Reader::Reader(std::string new_name)
        : Reader{new_name, "None", 0} {}

Reader::Reader(std::string new_name, std::string new_sur)
        : Reader{new_name, new_sur, 0} {}

Reader::Reader(std::string new_name, std::string new_sur, int new_age)
        : name(new_name), surname(new_sur), age(new_age) {}
