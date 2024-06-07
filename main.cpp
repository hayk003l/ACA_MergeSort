#include <iostream>
#include "MergeSort.hpp"

int main() {

    int arr[] = {1, 9, 2, 8, 4};
    mergeSort(arr, 0, 4);

    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }


}