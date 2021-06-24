std::vector<std::string> split(std::string& text) {
    std::string tmp;
    std::vector<std::string> stk;
    std::stringstream ss(text);
    while(std::getline(ss, tmp, ' ')) {
        stk.push_back(tmp);
    }
    return stk;
}

void cd(std::string _arg) {
    std::vector<std::string> words = split(_arg);
    if (words[1].c_str()) {
        chdir(words[1].c_str());
    } else {
        chdir(getenv("HOME"));
    }
}

