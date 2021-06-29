#include "./include/types/Types.dep.hpp"
#include "./include/types/Types.hpp"
#include <iostream>

int main() {
    str_t stri = str_t("hello this is no");
    std::cout << !stri.capitalize() << "\n";
    std::cout << !stri.count('l') << "\n";

    std::cout << !stri.endswith("hello") << "\n";
    std::cout << !stri.endswith("no") << "\n";
    std::cout << !stri.find("this") << "\n";
    std::cout << !stri.find("does not exist") << "\n";

    str_t empt = str_t("");
    str_t nr = str_t("1");

    std::cout << !nr.isalnum() << "\n";
    std::cout << !empt.isalnum() << "\n";
    std::cout << !stri.isalnum() << "\n";

    std::cout << !stri << "\n";
    stri.strip();
    std::cout << !stri << "\n";

    std::cout << !stri.isempty() << "\n";
    std::cout << !empt.isempty() << "\n";
    std::cout << stri[1] << "\n";

    return 0;
}

// ! returns a char *
// [idx] returns a character