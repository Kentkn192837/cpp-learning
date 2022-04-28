/* g++ -std=c++17 -o list13_10 list13_10.cpp */
#include <iostream>
#include <string>

int main()
{
    std::string str = "C++";
    std::cout << str.length() << std::endl;

    // 空文字列にする
    str.clear();

    if (str.empty()) {
        std::cout << "empty." << std::endl;
    }

    str = "漢字";
    std::cout << str.length() << std::endl;
}
