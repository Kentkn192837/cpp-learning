#include <iostream>
#include <utility>

int main()
{
    // std::pairはメンバー変数first, secondで要素にアクセスできる。
    std::pair<std::string, int> si{"pair", 42};
    std::cout << si.first << ", " << si.second << std::endl;
}
