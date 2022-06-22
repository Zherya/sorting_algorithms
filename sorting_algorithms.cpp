#include <random>
#include "sorting_algorithms.hpp"

namespace sort {

    unsigned long long quickSort::randomPivot(unsigned long long min, unsigned long long max) {
        /* Установка генератора псевдослучайных чисел с зерном из программной энтропии: */
        static std::mt19937_64 generator(std::random_device{}());
        /* Распределение случайных значений в диапазоне [min, max]: */
        return std::uniform_int_distribution<unsigned long long>(min, max)(generator);
    }

}
