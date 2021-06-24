# include <fstream> /* fstream Input/output stream class to operate on files */
# include <iostream>
# include <string>

int main() {
    /* WRITING TO FILES */
    // file handler (ofstream for writting files and ifstream for reading files)
    std::ofstream file_handler;

    // open a file
    file_handler.open("write_me.txt");

    // write to a file
    file_handler << "Hello, this is line 1" << "\n";
    file_handler << "This is line 2" << "\n";

    // close the file
    file_handler.close();

    /* READING A FILE */
    // open a new file
    std::ifstream file_handler_read;
    file_handler_read.open("read_me.txt");
    // create a variable for the file line to go
    std::string line;

    // check if the file is open
    if (file_handler_read.is_open()) {
        // keep reading the file until EOF?
        while (std::getline(file_handler_read, line)) {
            // output the line
            std::cout << line << "\n";
        }
    } else {
        // error out if unable to open the file
        std::cerr << "Unable to open the file" << "\n";
        return -1;
    }

    return 0;
}
