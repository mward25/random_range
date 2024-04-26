#ifndef RANDOM_RANGE_HPP
#define RANDOM_RANGE_HPP
#include <random>
static std::random_device randomSrc = std::random_device();

template<typename T>
T random_real(T minReal, T maxReal) {
    std::uniform_real_distribution<T> distribution = std::uniform_real_distribution<T>(minReal, maxReal);
    return distribution(randomSrc);
}

template<typename T>
T random_int(T minInt, T maxInt) {
    std::uniform_int_distribution<T> distribution = std::uniform_int_distribution<T>(minInt, maxInt);
    return distribution(randomSrc);
}
#endif
