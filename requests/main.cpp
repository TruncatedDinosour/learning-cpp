# include <iostream>
# include <cpr/cpr.h>

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        std::cerr << "usage: " << argv[0] << " <url>" << "\n";
        return -1;
    }

    // request object, with a timeout, time is in miliseconds
    auto r = cpr::Get(cpr::Url{ argv[1] }, cpr::Timeout(5000));
    // output the response
    std::cout << r.text << "\n";

    return 0;
}
