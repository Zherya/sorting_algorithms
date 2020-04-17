#include <random>
#include "sorting_algorithms.hpp"

namespace sort {

    std::size_t quickSort::randomPivot(std::size_t min, std::size_t max) {
        /* Установка генератора псевдослучайных чисел с зерном из программной энтропии: */
        static std::mt19937_64 generator(std::random_device{}());
        /* Распределение случайных значений в диапазоне [min, max]: */
        return std::uniform_int_distribution<unsigned short>(min, max)(generator);
    }

}
