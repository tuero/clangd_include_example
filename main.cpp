#include <iostream>
#include <string>

#include "util.h"

struct X {
    X(const std::string &s) : s(s) {}
    bool is_terminal() const {
        return false;
    }
    std::string s;
};

template <typename T>
concept Env = SimpleEnv<T>;

template <Env T>
bool is_terminal(const T &t) {
    return t.is_terminal();
}

int main() {
    X x("hello");
    std::cout << is_terminal(x) << std::endl;
}
