#include "./include/functions/Functions.dep.hpp"
#include "./include/functions/Functions.hpp"

int main() {
    print("Hi, welcome to bad thing.");
    auto name = input("enter your name: ");
    auto age = input("enter your age: ");
    print("Hi, " + name + ". You are " + age + " years old.");

    std::cout << chr(37) << "\n";;
    std::cout << ord('%') << "\n";

    print("binary 42 is: " + bin(42));
    return 0;
}
