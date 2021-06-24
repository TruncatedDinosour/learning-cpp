# include <iostream>
# include "include.hpp"

int main() {
    BadString str;
    str.init = "hello";
    str.print();

    std::cout << str.getCharAtIndex(1) << "\n";

    std::cout << str.getChar('o') << "\n";
    std::cout << str.getChar('m') << "\n";

    return 0;
}
