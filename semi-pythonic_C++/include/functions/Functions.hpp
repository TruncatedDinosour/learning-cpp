void print(std::string str, char end = '\n') {
    std::cout << str << end;
}

std::string input(std::string prompt) {
    std::string tmp;
    
    std::cout << prompt;
    getline(std::cin, tmp);

    return tmp;
}

char chr(int i) {
    return (char)i;
}

int ord(char c) {
    return (int)c;
}

std::string bin(int n) {
    std::string r;
    do {
        r += (n % 2 == 0 ? '0' : '1');
        n /= 2;
    } while (n > 0);
    return r;
}
