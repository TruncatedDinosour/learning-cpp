# include <iostream>
# include <string>

class BadString {
public:
    std::string init;

    void print() {
        std::cout << init << "\n";
    }

    // used for large positive integers or 0 (equivalent to unsigned long int)
    char getCharAtIndex(unsigned long index) {
        return init.at(index);
    }

    int getChar(char character) {
        for (std::size_t i = 0; i < init.size(); ++i) {
            if (init.at(i) == character) {
                return i;
            }
        }
        return -1;
    }
};
