#include <iostream>
#include <signal.h>
#include <limits.h>
#include <unistd.h>
#include <vector>
#include <functional>
#include <map>
#include <sstream>

#include "config.hpp"
#include "lib/rang.hpp"
#include "include/func.hpp"
#include "include/cmd.hpp"


int main() {
    #include "include/sig.hpp"
    #include "include/cmd.allow.hpp"

    autorun();

    bool isRunning = true;
    std::string cmd;

    if (!system(NULL)) {
        printc("WARNING: No command processor found.", rang::fg::yellow);
    }

    std::map<std::string, std::function<void(std::string)>> funcMap = {
        {"cd", cd}
    };

    while (isRunning) {
        looprun();

        std::cout << parsePS(PS);
        getline(std::cin, cmd);

        bool allowCmdPres = (std::find(allowCmd.begin(), allowCmd.end(), cmd.substr(0, cmd.find(' '))) != allowCmd.end());
        if (allowCmdPres) {
            funcMap[cmd.substr(0, cmd.find(' '))](cmd);
            continue;
        } else if (cmd.substr(0, cmd.find(' ')) == "exit") {
            isRunning = false;
        }

        if (cmd.c_str()) {
            system(cmd.c_str());
        }
    }

    return 0;
}
