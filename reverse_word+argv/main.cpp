# include <iostream>
# include <algorithm>

// argc - argv count, argv - ./exe = [0] hello - [1......]
int main(int argc, char const *argv[]) {
    if (argc < 2) {
        std::cerr << "usage: " << argv[0] << " " << "\"" << "<string>" << "\"" << "\n";
        return -1;
    } else {
        std::string tmp = argv[1];
        std::reverse(tmp.begin(), tmp.end());
        std::cout << tmp << "\n";
    }
    return 0;
}
