# include <iostream>
# include "main.hpp"

int main() {
    Array<int> arr;
    std::cout << arr.size() << "\n";
    for (int i = 0; i < 10; ++i) {
        arr.append(3);
    }
    std::cout << arr.size() << "\n";
    arr.clear();
    std::cout << arr.size() << "\n";

    for (int i = 0; i < 10; ++i) {
        arr.append(3);
    }

    Array<int> arr2 = arr.copy();
    std::cout << arr2.size() << "\n";
    arr2.append(72);
    std::cout << arr2.size() << "\n";
    std::cout << arr.size() << "\n";
    arr.clear();
    std::cout << arr.size() << "\n";

    std::cout << arr2.count(22) << "\n";
    std::cout << arr2.count(72) << "\n";
    std::cout << arr2.count(3) << "\n";

    for (int i = 0; i < 10; ++i) {
        arr.append(3);
    }

    Array<int> arr3;
    arr3.extend(arr2);
    arr3.extend(arr);
    std::cout << arr3.size() << "\n";

    std::cout << arr3.index(3) << "\n";
    std::cout << arr3.index(38) << "\n";

    std::cout << arr.count(273) << "\n";
    std::cout << arr.index(273) << "\n";
    arr.insert(5, 273);
    std::cout << arr.count(273) << "\n";
    std::cout << arr.index(273) << "\n";
    arr.pop(5);
    std::cout << arr.count(273) << "\n";
    std::cout << arr.index(273) << "\n";
    
    arr.append(732);
    arr.append(732);
    std::cout << arr.count(732) << "\n";
    std::cout << arr.index(732) << "\n";
    arr.remove(732);
    std::cout << arr.count(732) << "\n";
    std::cout << arr.index(732) << "\n";

    for (std::size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr.as_iter()[i] << "\n";
    }
    arr.reverse();
    for (std::size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr.as_iter()[i] << "\n";
    }

    Array<int> arr4;
    arr4.append(1);
    arr4.append(5);
    arr4.append(2);
    arr4.append(5);
    arr4.append(8);
    arr4.append(-2);
    std::cout << "\n" << "\n";
    for (std::size_t i = 0; i < arr4.size(); ++i) {
        std::cout << arr4.as_iter()[i] << "\n";
    }
    arr4.sort();
    for (std::size_t i = 0; i < arr4.size(); ++i) {
        std::cout << arr4.as_iter()[i] << "\n";
    }

    return 0;
}
