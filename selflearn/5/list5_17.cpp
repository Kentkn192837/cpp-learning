#include <iostream>

int x;

int& get_x()
{
    return x;
}

int main()
{
    x = 10;
    int& y = get_x();
    std::cout << y << std::endl;
    y = 100;
    std::cout << y << std::endl;
}
