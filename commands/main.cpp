# include <iostream>
# include <string>

int main() {
    if (!system(NULL)) {
        std::cerr << "No command processor found" << "\n";
        return -1;
    }

    std::string cmd;
    int code = 0;
    do {
        std::cout << "[" << code << "]" << "$ ";
        std::getline(std::cin, cmd);

        code = system(cmd.c_str());

        if (cmd == "exit") {
            break;
        }
    } while (true);

    return 0;
}
