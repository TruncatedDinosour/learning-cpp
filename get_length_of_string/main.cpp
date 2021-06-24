# include <iostream>
# include <string>

int main() {
    std::string str;

    std::cout << "enter something: ";
    std::cin >> str;

    std::cout << "length of" << " " << "\"" << str << "\"" << " " << "is" << " " << str.length() << "\n";
    return 0;
}
