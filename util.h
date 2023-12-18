#ifndef UTIL_H_
#define UTIL_H_

#include <string>

// Concept for simple states for flat search
template <typename T>
concept SimpleEnv = requires(T t, const T ct, const std::string &s) {
    T(s);
    { ct.is_terminal() } -> std::same_as<bool>;
};

#endif    // UTIL_H_
