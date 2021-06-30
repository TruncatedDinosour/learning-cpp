// python.h seems to be annoying
#include <pybind11/embed.h>
#include <iostream>

int main() {
    pybind11::scoped_interpreter guard();  // start and keep alive
    /* run python code */
    pybind11::print("Hello, I am python...");
    std::cout << "Well... Now C++..." << "\n"; /* C++ code, not python */
    pybind11::print("WHO AM I?????????");
}
