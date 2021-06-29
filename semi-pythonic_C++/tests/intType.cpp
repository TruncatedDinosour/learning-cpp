#include "./include/types/Types.dep.hpp"
#include "./include/types/Types.hpp"
#include <iostream>


int main() {
    int_t i = int_t(42);
    std::cout << i.real() << "\n";
    std::cout << (i - 2) << "\n";
    std::cout << (i + 2) << "\n";
    std::cout << (i / 2) << "\n";
    std::cout << (i * 2) << "\n";
    std::cout << (i ^ 2) << "\n";

    std::cout << (i < 2) << "\n";
    std::cout << (i < 52) << "\n";
    std::cout << (i > 2) << "\n";
    std::cout << (i > 257) << "\n";

    i = 67;

    std::cout << i.real() << "\n";
    return 0;
}
