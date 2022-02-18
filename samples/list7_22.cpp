#include <iostream>
#include <string>
#include "Point.h"

int main()
{
    Point p;

    std::cout << "x座標とy座標を入力してください:";
    std::cin >> p;

    std::cout << "入力された座標は、" << p << "です。" << std::endl;
    return 0;
}
