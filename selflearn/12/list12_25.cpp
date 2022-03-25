/* コンパイル時にc++のバージョンを指定する */
/* g++ -std=c++17 -o list12_25 list12_25.cpp */
#include <iostream>
#include <tuple>

int main()
{
    std::tuple t{std::string{"structured"}, 42, "binding"};
    auto [a, b, c] = t;     // 構造化束縛。それぞれstd::string, int, const char*で推論されている。

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << std::endl;

    auto& [x, y, z] = t;    // 参照渡しの場合
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << std::endl;

    x = "update";           // 参照を使ってタプルの要素を更新する
    std::cout << std::get<0>(t) << std::endl;
}
