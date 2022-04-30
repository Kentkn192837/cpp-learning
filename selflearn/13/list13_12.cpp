/* g++ -std=c++17 -o list13_12 list13_12.cpp */
#include <iostream>
#include <string>

int main()
{
    std::string str = "abc";

    // C文字列を取得
    const char* c_str = str.c_str();

    int pos = 0;
    while (true) {
        if (c_str[pos] == '\0') {
            std::cout << "[\\0]" << std::endl;
            break;
        } else {
            std::cout << c_str[pos] << std::endl;
        }
        pos++;
    }
}
