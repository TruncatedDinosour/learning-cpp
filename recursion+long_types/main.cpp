#include <iostream>
#include <algorithm>

unsigned long long int fib(unsigned long long int x) {
    if (x <= 1) {
        return x;
    } else {
        return fib(x - 1) + fib(x - 2);
    }
}

int main() {
    std::cout << "Fibonacci 25: " << fib(25) << "\n";
    return 0;
}
