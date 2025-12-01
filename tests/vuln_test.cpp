#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    const std::string API_KEY = "sk_test_123456789_SECRET_KEY";

    std::cout << "Running vulnerable test..." << std::endl;

    std::string cmd;
    std::cout << "Enter command to run: ";
    std::getline(std::cin, cmd);

    system(cmd.c_str());

    FILE* f = fopen("/tmp/testfile.txt", "w+");
    if (f) {
        fprintf(f, "API_KEY=%s\n", API_KEY.c_str());
        fclose(f);
    }

    return 0;
}
