#ifndef CATCHPLAYGROUND_PHONENUMBER_H
#define CATCHPLAYGROUND_PHONENUMBER_H

#include <string>

class PhoneNumber {

public:
   PhoneNumber(std::string string)
    {

    }

    bool isNorthAmericanNumber() {
        return false;
    }

    std::string getStrippedNumber() {
        return "";
    }

    std::string getValueAsNorthAmerican() {
        return "";
    }

    std::string getValueAsInternational() {
        return "";
    }
};

#endif