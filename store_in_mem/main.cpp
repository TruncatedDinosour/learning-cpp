#include <iostream>
#include <string>
#include <fstream>
#include <string.h>

int main()
{
    std::string alloc_bytes;
    int bytes;

    std::cout << "Alloc bytes: ";
    getline(std::cin, alloc_bytes);

    bytes = atoi(alloc_bytes.c_str());
    alloc_bytes.clear();

    char *buffer = (char *)malloc(bytes);

    if ((void *)buffer == 0)
    {
        std::cerr << "Buffer pointer has been corrupted." << '\n';
        return 1;
    }

    std::cout << "Switching to interactive mode" << '\n';

    while (true)
    {
        std::string cmd;

        std::cout << ":: ";
        getline(std::cin, cmd);

        if (cmd == "qq")
        {
            break;
        }
        else if (cmd == "dh")
        {
            std::cout << buffer << '\n';
        }
        else if (cmd == "ds")
        {
            std::string data;

            std::cout << ">> ";
            getline(std::cin, data);

            strcpy(buffer, data.c_str());
            data.clear();
        }
        else if (cmd == "dp")
        {
            std::cout << (void *)buffer << '\n';
        }
        else if (cmd == "dc")
        {
            memset(buffer, '\0', sizeof(buffer) + 1);
        }
        else if (cmd == "dd")
        {
            std::string path;

            std::cout << ">> ";
            getline(std::cin, path);

            FILE *pFile = fopen(path.c_str(), "wb");
            int buffer_size = strlen(buffer) + 1;

            if (!pFile)
            {
                std::cerr << "Cannot open file" << '\n';
                return 1;
            }

            fwrite(buffer, buffer_size, 1, pFile);

            fclose(pFile);
            path.clear();
        }
        else if (cmd == "da")
        {
            std::string data;

            std::cout << ">> ";
            getline(std::cin, data);

            sprintf(buffer + strlen(buffer), data.c_str());
            data.clear();
        }
        else if (cmd == "dl")
        {
            std::string path;
            std::string line;

            std::cout << ">> ";
            getline(std::cin, path);

            std::ifstream file_handler;
            file_handler.open(path);

            if (file_handler)
            {
                while (std::getline(file_handler, line))
                {
                    strcat(buffer, line.c_str());
                }
            }

            file_handler.close();
            path.clear();
        }

        cmd.clear();
    }

    void *tmpptr = (void *)buffer;

    std::cout << "Freeing " << tmpptr << '\n';
    free(buffer);
    std::cout << tmpptr << " freed" << '\n';

    return 0;
}
