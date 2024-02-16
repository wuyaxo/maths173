#include <iostream>
#include "fstream"
#include "sstream"

int main() {
    std::ifstream infile("states.txt");
    if (!infile.is_open()) {
        std::cout << "Can't open the file";
        return 100;
    }
    std::string line, state;
    std::getline(infile, line);
    std::getline(infile, line);
    std::getline(infile, line);
    while (std::getline(infile, line)) {
//        std::cout << line << "\n";
        if (line.empty())
            continue;
        std::istringstream in(line);
        std::cout << "State:\n";
        in >> state;
        std::cout << state << "\n";
        std::cout << "Adjacent States:\n";
        while (in >> state) {
            std::cout << state << "\n";
        }
    }
    infile.close();
    return 0;
}
