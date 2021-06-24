# include <iostream>
# include <random>
# include <ctime>

# define COUNT 50
# define MAX 50

int main() {
    // making a new random seed
    srand(time(NULL));

    for (int i = 0; i < COUNT; ++i) {
        std::cout << rand() % MAX << "\n";
    }

    return 0;
}
