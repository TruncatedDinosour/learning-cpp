#include <iostream>
#include <string>

int main() {
    std::string text;
    do {
        std::getline(std::cin, text);
        std::cout << text << "\n";
    } while (true);

    return 0;
}

