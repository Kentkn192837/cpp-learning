/* g++ -std=c++17 -o list12_31 list12_31.cpp */
#include <iostream>
#include <set>

int main()
{
    // std::multiset 要素の重複を許したstd::set
    std::multiset ims = { 1, 1, 2, 2 };

    ims.insert(5);      // { 1, 1, 2, 2, 5 }
    ims.insert(2);      // { 1, 1, 2, 2, 2, 5 }

    auto range = ims.equal_range(2);
    for (auto iter = range.first; iter != range.second; iter++) {
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;

    // 2をすべて削除し、削除された要素数を返す
    std::size_t erased = ims.erase(2);
    std::cout << "elements num:" << erased << std::endl;

    for (auto iter = ims.begin(); iter != ims.end(); iter++) {
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;
}
