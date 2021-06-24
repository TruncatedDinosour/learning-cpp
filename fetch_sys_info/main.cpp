# include <iostream>
# include <sys/utsname.h>
# include <unistd.h>
# include "rang.hpp"

/*
  * https://linux.die.net/man/2/uname
  * https://stackoverflow.com/questions/8953424/how-to-get-the-username-in-c-c-in-linux
*/
int main() {
    struct utsname u;
    uname(&u);

    std::cout   << "  _     "    << rang::style::bold << rang::fgB::magenta << getlogin() << rang::fg::reset << "@" << rang::fgB::magenta << u.nodename << rang::style::reset << "\n"
                << " (v)    "    << rang::style::bold << rang::fg::blue << "Kernel Version   " << rang::style::reset << u.release << "\n"
                << "//-\\\\   "  << rang::style::bold << rang::fg::blue << "System Version   " << rang::style::reset << u.version << "\n"
                << "(\\_/)   "   << rang::style::bold << rang::fg::blue << "Machine          " << rang::style::reset << u.machine << "\n"
                << " ^ ^    "    << rang::style::bold << rang::fg::blue << "OS name          " << rang::style::reset << u.sysname << "\n";
    return 0;
}
