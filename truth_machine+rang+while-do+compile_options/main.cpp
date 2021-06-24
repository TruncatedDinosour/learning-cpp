# include <iostream>
# include <string>
# include "rang.hpp"

int main() {
    std::string tmp;
    int truth;

    std::cout << rang::fgB::blue << ">>> " << rang::style::reset;
    std::cin >> tmp;

    truth = std::atoi(tmp.c_str());
    tmp.erase();

    if (truth < 0 || truth > 1) {
        return -1;
    } else if (truth) {
        do {
            std::cout << truth; 
        } while (truth);
    }

    std::cout << truth << "\n";
    return 0;
}
