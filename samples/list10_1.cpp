#include <iostream>

template <class T> T getMin(T a, T b) {
    return a < b ? a : b;
}

int main()
{
    int a = 123;
    int b = 456;
    int c = getMin(a, b);
    std::cout << c << std::endl;

    double x = 1.23;
    double y = 4.56;
    double z = getMin(x, y);
    std::cout << z << std::endl;

    return 0;
}
