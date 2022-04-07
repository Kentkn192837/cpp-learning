/* g++ -std=c++17 -o list12_32 list12_32.cpp */
#include <iostream>
#include <map>

int main()
{
    std::multimap<std::string, float> w;    // 相対原子質量

    w.insert(std::pair{"U", 235.04f});
    w.insert(std::pair{"U", 238.05f});

    w.insert(std::pair{"Pu", 238.05f});
    w.insert(std::pair{"Pu", 239.05f});
    w.insert(std::pair{"Pu", 240.05f});

    // プルトニウムが含まれている範囲をstd::pairで返す
    auto pu = w.equal_range("Pu");

    for (auto iter = pu.first; iter != pu.second; ++iter) {
        std::cout << iter->first << ": " << iter->second << std::endl;
    }

    // プルトニウムをすべて削除し、削除された要素数を返す
    std::size_t erased = w.erase("Pu");

    std::cout << "elements num:" << erased << std::endl;

    for (auto iter = w.begin(); iter != w.end(); iter++) {
        std::cout << iter->first << ": " << iter->second << std::endl;
    }
    std::cout << std::endl;
}
