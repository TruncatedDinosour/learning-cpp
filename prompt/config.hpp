#include "./lib/userinfo.hpp"             /* get user info */

std::string PS = "[ \\h@\\u \\d]$ ";    /* prompt */
bool ENABLE_DEBUG_USAGE = false;        /* enables debug features */

void autorun() {
    std::cout << "Welcome, " << username() << "\n";
    // code here automatically runs
}

void looprun() {
    std::cout << "\n";
    // code here runs every loop
}
