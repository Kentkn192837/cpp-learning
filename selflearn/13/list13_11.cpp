/* g++ -std=c++17 -o list13_11 list13_11.cpp */
#include <iostream>
#include <string>

int main()
{
    std::string str = "ushikamoshika";
    std::string sub = str.substr(4, 4);     // 4番目から4文字分の文字列を取得

    std::cout << "str.substr(4, 4): " << sub << std::endl;

    sub = str.substr(4);        // 4番目から最後までの文字列を取得
    std::cout << "str.substr(4): " << sub << std::endl;
}
