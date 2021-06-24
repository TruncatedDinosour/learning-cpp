void printc(std::string str, rang::fg colour) {
    std::cout << colour << str << rang::fg::reset;
}

void interrupt_handler(int code) {
    if (ENABLE_DEBUG_USAGE) {
        std::cout << "code: " << code << "\n";
        exit(code);
    }
}

std::string parsePS(std::string ps) {
    std::string psCpy = ps;

    std::vector<std::string> ops;
    ops.push_back("\\u");
    ops.push_back("\\h");
    ops.push_back("\\d");


    // If you care, yes, this was a pain.
    for (size_t i = 0; i < ops.size(); ++i) {
        std::size_t prop_pos = psCpy.find(ops[i]);

        if (prop_pos != std::string::npos) {
            while (prop_pos != std::string::npos) {
                if (ENABLE_DEBUG_USAGE) {
                    std::cout << "PS parser: " << prop_pos << "\n";
                }

                std::string chr = "";
                if (ops[i] == "\\u") {
                    chr = username();
                } else if (ops[i] == "\\h") {
                    chr = hostname();
                } else if (ops[i] == "\\d") {
                    chr = get_current_dir_name();
                }

                psCpy.replace(prop_pos, 2, chr);
                prop_pos = psCpy.find(ops[i]);
            }
        }
    }

    return psCpy;
}

// cGxlYXNlIGhlbHAsIHRoaXMgaXMgdG9ydHVyZSwgSSBtaXNzIHB5dGhvbgo=
