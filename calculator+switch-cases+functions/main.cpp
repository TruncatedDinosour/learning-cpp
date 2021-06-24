# include <iostream>
# include "main.hpp"

int main() {
    int x;
    int y;
    char operation;

    int result;


    std::cout << "enter x: ";
    std::cin >> x;

    std::cout << "enter the operation (+, -, /, *): ";
    std::cin >> operation;

    std::cout << "enter y: ";
    std::cin >> y;


    switch (operation) {
        case '+':
            result = add(x, y);
            break;
        
        case '-':
            result = subtract(x, y);
            break;
        
        case '/':
            result = divide(x, y);
            break;
        
        case '*':
            result = multiply(x, y);
            break;
        
        default:
            std::cerr << "Invalid opperation supplied" << "\n";
            return -1;
    }

    std::cout << "The result is" << " " << result << "\n";
    return 0;
}
