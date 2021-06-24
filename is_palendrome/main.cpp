# include <iostream>
# include <string>
// don't use # include <bits/stdc++.h>, because it will pull the whole STD lib 
// bits/stdc++.h is making your code dependent on a compiler
# include <algorithm>

int main() {
    std::string word;
    std::string reversed;

    std::cout << ">>> ";
    std::cin >> word;
    reversed = word;

    std::reverse(reversed.begin(), reversed.end());

    if (reversed == word) {
        std::cout << "It is a palendrome" << "\n";
    } else {
        std::cout << "It is not a palendrome" << "\n";
    }

    return 0;
}
