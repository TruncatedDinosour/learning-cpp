#include <filesystem>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

namespace fs = std::filesystem; // for less to typing

int return_code = 0;
const static unsigned int cmd_count = 1;

std::vector<std::string> cmds = { "cpp" };
std::vector<std::string> *vec = (std::vector<std::string>*)malloc(cmd_count * sizeof(std::string) + sizeof(std::vector<std::string>));    

#include "include/func.hpp"


int main(int argc, char const *argv[]) {
    if (!vec) {
        std::cerr << "malloc(): could not allocate memory" << "\n";
        return -1;
    }

    if (argc != 2) {
        std::cerr << "USAGE:" << "\n"
                  << "    " << argv[0] << " " << "[help|(TYPE_OF_PROJECT)]"
                  << "\n";
        return -1;
    }


    for (std::string cmd_str : cmds) {
        vec -> push_back(cmd_str);
    }
    cmds.clear();


    std::string cmd = argv[1]; // For readability
    for (size_t i = 0; i < vec -> size(); ++i) {
        if (cmd == "cpp") {
            cpp();
        } else if (cmd == "help") {
            help();
        } else {
            std::cerr << "Project type "
                      << "\"" << cmd << "\""
                      << " not found" << "\n";
            return_code = 32;
            break;
        }
    }


    free(vec);
    return return_code;
}
