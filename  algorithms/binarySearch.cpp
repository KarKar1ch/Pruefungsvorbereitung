#include  <iostream>


int binarySearch(int arr[],int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (right + left) / 2;
        int guess = arr[mid];

        if (guess == target) {
            return mid;
        }else if (guess < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }

    }

    return -1;
}


int main() {
    int myArr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int ArrSize = std::size(myArr);

    int a = binarySearch(myArr, ArrSize, 12);

    std::cout << a << std::endl;
    return 0;
}
