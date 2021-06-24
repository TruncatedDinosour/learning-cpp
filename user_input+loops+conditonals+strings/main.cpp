# include <iostream>
# include <string>

int main() {
    while (true) {
        std::string response;

        std::cout << "Enter something (e to exit): ";
        std::cin >> response;

        if (response == "e") {
            break;
        }

        std::cout << "You have entered " << response << "\n";
    }

    return 0;
}
