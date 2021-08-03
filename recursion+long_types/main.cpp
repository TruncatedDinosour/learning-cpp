#include <iostream>

unsigned long long int fib(unsigned long long int x) {
    if (x <= 1) return x;
    return fib(x - 1) + fib(x - 2);
}

int main() {
    std::cout << "Fibonacci 25 O(n): " << fib(25) << "\n";
    return 0;
}
