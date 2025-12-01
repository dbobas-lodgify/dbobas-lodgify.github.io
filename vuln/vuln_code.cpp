#include "vuln_code.h"
#include <cstring>
#include <iostream>

void processUserInput(const std::string& input) {
    char buffer[8];

    strcpy(buffer, input.c_str());

    std::cout << "Welcome, " << buffer << std::endl;
}
