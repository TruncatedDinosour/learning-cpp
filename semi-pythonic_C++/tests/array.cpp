#include <iostream>
#include <string>
#include "./include/array/Array.dep.hpp"
#include "./include/array/Array.hpp"

int main() {
    Array<int> a;
    a.append(1);
    a.append(2);

    Array<int> b = a.copy();
    b.append(7);
    a.append(5);
    a.append(5);

    std::cout << a.index(7) << "\n";
    std::cout << a.count(5) << "\n";

    b + a;
    std::cout << a.index(5) << "\n";
    std::cout << a.index(7) << "\n";

    Array<std::string> h;
    h.append("bye");
    h.append("hello");
    h.append("bye");
    h.append("hello");
    h.append("hello");
    h.append("bye");
    std::cout << h.index("hi") << "\n";

    h.insert("hi", 3);
    std::cout << h.index("hi") << "\n";

    h.pop(3);
    std::cout << h.index("hi") << "\n";

    std::cout << h.index("hello") << "\n";
    h.remove("hello");
    std::cout << h.index("hello") << "\n";
    h.reverse();
    std::cout << h.index("hello") << "\n";

    std::cout << "old h: " << "\n";
    for (std::size_t i = 0; i < h.size(); ++i) {
        std::cout << h[i] << " ";
    }
    std::cout << "\n";
    h.sort();
    std::cout << "new h: " << "\n";
    for (std::size_t i = 0; i < h.size(); ++i) {
        std::cout << h[i] << " ";
    }
    std::cout << "\n";
    std::cout << h.index("hello") << "\n";
    std::cout << "old b: " << "\n";
    for (std::size_t i = 0; i < b.size(); ++i) {
        std::cout << b[i] << " ";
    }
    b - 5;
    std::cout << "\n";
    std::cout << b.index(7) << "\n";
    b.sort();
    std::cout << b.index(7) << "\n";
    std::cout << "new b: " << "\n";
    for (std::size_t i = 0; i < b.size(); ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << "\n";


    return 0;
}
