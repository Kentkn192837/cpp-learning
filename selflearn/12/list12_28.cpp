/* g++ -std=c++17 -o list12_28 list12_28.cpp */
#include <iostream>
#include <set>

void print_set(const std::set<int>& l)
{
    for (auto iter = l.begin(); iter != l.end(); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::set is = { 1, 1, 2, 2, 3, 3, 4 };
    print_set(is);

    is.insert(5);
    print_set(is);

    is.insert(2);
    print_set(is);
}
