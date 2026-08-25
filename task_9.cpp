#include <iostream>
#include <fstream>

int main() {
    int count = 0;
    char ch;

    std::ifstream in;
    in.open("task1.txt");

    if (!in.is_open()) {
        std::cout << "Error" << std::endl;
        return 1;
    }

    while (in.get(ch)) {
        if (ch == 'A') {
            ++count;
        }
    }

    in.close();
    std::cout << count << std::endl;

    return 0;
}
