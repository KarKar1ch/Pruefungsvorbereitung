#include <iostream>

int recurs(int N) {
    if (N == 1) return 1;
    return  N + recurs(N-1);
}


int main() {
    int a = recurs(10);
    std::cout << a << std::endl;

    return 0;
}