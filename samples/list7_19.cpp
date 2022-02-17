#include <iostream>
#include <string>
#include "Point.h"

int main()
{
    Point p1(3, 5);
    Point p2(2, 4);
    Point p3(3, 5);

    if (p1 == p2) std::cout << "p1とp2は、等しい。" << std::endl;
    if (p1 != p2) std::cout << "p1とp2は、等しくない。" << std::endl;
    if (p1 == p3) std::cout << "p1とp3は、等しい。" << std::endl;
    if (p1 != p3) std::cout << "p1とp3は、等しくない。" << std::endl;
    return 0;
}
