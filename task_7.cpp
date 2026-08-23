#include <iostream>
#include <vector>
#include <utility>



int main() {
    std::vector<std::pair<int, int>> shop_items;
    int sum = 0;
    for (int i = 0; i < shop_items.size(); i++) {
        sum += shop_items[i].first;
    }

    std::cout << sum;
}