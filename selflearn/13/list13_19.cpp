#include <iostream>
#include <string>
#include <regex>

int main()
{
    // 正規表現:'a'で始まり'e'で終わる
    std::regex re{"a.*e"};

    std::string input = "delicious applepie and banana";
    std::smatch match;

    if (std::regex_search(input, match, re)) {
        std::cout << match.str()                    // マッチした文字列
                << " pos = " << match.position()    // その位置
                << " len = " << match.length()      // 長さ
                << std::endl;
    }
}
