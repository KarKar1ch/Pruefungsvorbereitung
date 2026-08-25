#include<iostream>
#include<fstream>
#include<string>
#include<vector>

int main() {
    int count1 = 0;
    int count2 = 0;
    char ch;
    std::vector <char> v;

    std::ifstream in;
    in.open("t2.txt");

    if (!in.is_open()) {
        return 1;
    }

    while (in.get(ch)) {
        v.push_back(ch);
    }

    in.close();

    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == 'A' || v[i] == 'B') {
            count1++;

            if (count1 > count2) {
                count2 = count1;
            }
        } else {
            count1 = 0;
        }
    }

    std::cout << count2 << std::endl;
    return 0;
}