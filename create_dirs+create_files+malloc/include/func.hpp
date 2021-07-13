void cpp() {
    // dirs
    fs::create_directory("include");

    // files
    std::ofstream mainh("include/main.hpp");
    mainh.close();

    std::ofstream makefile("Makefile");
    makefile.close();

    std::ofstream mainf("main.cpp");
    mainf.close();
}

void help() {
    std::cout << "Available project types:" << "\n";
    for (size_t i = 0; i < vec -> size(); ++i) {
        std::cout << " * " << vec -> at(i) << "\n";
    }
}
