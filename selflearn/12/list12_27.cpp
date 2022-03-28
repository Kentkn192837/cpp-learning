/* g++ -std=c++17 -o list12_27 list12_27.cpp */
#include <iostream>
#include <set>

int main()
{
    std::set is = { 3, 1, 0, 2, 4 };

    is.insert(is.end(), -1);
    is.insert(-2);

    for (auto iter = is.begin(); iter != is.end(); iter++) {
        std::cout << *iter << std::endl;
    }
}
