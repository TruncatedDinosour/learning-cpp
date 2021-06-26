#include <vector>
#include <string>
#include <iostream>
#include "include/main.hpp"


int main() {
    Array<std::string> arr;

    arr.append("hello_0");
    arr.append("hello_1");
    arr.append("hello_2");
    arr.append("hello_3");

    std::cout << arr[0] << "\n";
    std::cout << arr[2] << "\n";
    std::cout << arr[90] << "\n";
    std::cout << arr[-2] << "\n";

    return 0;
}
