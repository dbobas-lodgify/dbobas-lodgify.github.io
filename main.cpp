#include <iostream>
#include <string>
#include "vuln/vuln_code.h"

int main() {
    std::string userInput;

    std::cout << "Enter your name: ";
    std::getline(std::cin, userInput);

    processUserInput(userInput);

    return 0;
}
