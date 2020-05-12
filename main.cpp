#include <iostream>
#include "sorting_algorithms.hpp"

int main() {
    constexpr int N = 18;
    double sortedPercentage;
    int array[N] = {47543, 32, 271, 0 , -1, 54, -243, 2473, -74237 , 24728, -532, 47, 0, -1, 4, 77, 77, 77};
    for (int element: array)
        std::cout << element << ' ';
    std::cout << '\n';

    sort::isSorted(array, N, false, &sortedPercentage);
    std::cout << "Array is sorted for " << sortedPercentage << "%\n\n";

    sort::heapSort::sort(array, N);

    for (int element: array)
        std::cout << element << ' ';
    std::cout << '\n';
    sort::isSorted(array, N, false, &sortedPercentage);
    std::cout << "Array is sorted for " << sortedPercentage << "%\n";

    std::cout << "47 is found at: " << sort::binarySearch(array, 0, N, 47) << '\n';
    return 0;
}
