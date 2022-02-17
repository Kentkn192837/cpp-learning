#include <iostream>
#include <string>
#include "Point.h"

int main()
{
    Point p1(3, 5);
    Point p2(2, 4);
    Point p3, p4;

    p3 = p1 + p2;
    p4 = p1 - p2;

    std::cout << "p1:x = " << p1.getX() << ", y = " << p1.getY() << std::endl;
    std::cout << "p1:x = " << p2.getX() << ", y = " << p2.getY() << std::endl;
    std::cout << "p1:x = " << p3.getX() << ", y = " << p3.getY() << std::endl;
    std::cout << "p1:x = " << p4.getX() << ", y = " << p4.getY() << std::endl;

    return 0;
}
