#include <iostream>
#include <cstring>

int main() {
    char username[10];
    std::string input;

    std::cout << "Enter username: ";
    std::getline(std::cin, input);

    strcpy(username, input.c_str());

    std::cout << "Hello, " << username << std::endl;
    return 0;
}
