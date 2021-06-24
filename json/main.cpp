# include <nlohmann/json.hpp>
# include <fstream>
# include <iostream>

/* https://kezunlin.me/post/f3c3eb8/ */
int main() {
    // read json
    std::ifstream i("json.json");
    // create an empty json structure
    nlohmann::json j;
    // put the contents of the file into the empty json structure
    i >> j;

    // read json keys (the same as in python)
    // also you can use std::cout in multiple lines :)
    std::cout << "name: " << j["name"] << "\n"
              << "licenses: " << j["licenses"] << "\n"
              << "is stupid: " << j["isStupid"] << "\n"
              << "children: " << j["children"] << "\n"
              << "children (jake): " << j["children"]["jake"] << "\n"
              << "something that doesn't exist: " << j["does_not_exist"] << "\n";
    
    return 0;
}
