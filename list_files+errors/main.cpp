#include <iostream>
#include <filesystem>
#include <string>
#include <vector>
#include <unistd.h>
#include <system_error>


int main(int argc, char const *argv[]) {
    std::vector<std::string> dir;
    const static bool showDir = (argc > 2);
    char sep = '\0';


    for (int i = 1; i < argc; ++i) {
        dir.push_back(argv[i]);
    }
    if (dir.size() < 1) dir.push_back(get_current_dir_name());


    // : = in
    for (std::string d : dir) {
        if (showDir) {
            std::cout << sep << d << ':' << '\n';
            if (sep != '\n') sep = '\n';
        }

        try {
            for (const std::filesystem::__cxx11::directory_entry &file : std::filesystem::directory_iterator(d)) {
                std::cout << file.path()
                            .filename().c_str() << "\n";
            }
        } catch (const std::system_error& e) {
            std::cout << e.code().message() << "\n";
        }
    }


    dir.clear();
    return 0;
}
