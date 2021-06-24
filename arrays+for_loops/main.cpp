# include <iostream>

int main() {
    // type name[size]
    int array[5] = { 6, 3, 5, 3, 5 };
    int array_size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < array_size; ++i) {
        std::cout << "we're on" << " " << array[i] << "\n";
    }

    return 0;
}
