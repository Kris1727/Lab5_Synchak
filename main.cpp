#include <iostream>

float f(int x, float y) {
    std::cout << "[overload int, float] ";
    return x * y * y;
}

double f(double x, double y) {
    std::cout << "[overload double, double] ";
    return x * y * y;
}

template <typename T1, typename T2>
auto f(T1 x, T2 y) {
    std::cout << "[template] ";
    return x * y * y;
}

int main() {
    std::cout << f(2, 3.0f) << '\n';
    std::cout << f(1.5, 2.0) << '\n';

    std::cout << f(3, 2) << '\n';
    std::cout << f(2L, 1.5f) << '\n';

    std::cout << f<int, float>(2, 3.0f) << '\n';
}