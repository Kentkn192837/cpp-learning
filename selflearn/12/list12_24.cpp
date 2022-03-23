#include <iostream>
#include <tuple>

int main()
{
    // std::tupleの要素にはstd::get()でアクセスする。
    std::tuple<int, std::string, char> isc{42, "tuple", 'c'};

    // std::get()の第1テンプレートパラメータに取得したい要素のインデックス番号を指定する。
    std::cout << std::get<0>(isc) << std::endl;
    std::cout << std::get<1>(isc) << std::endl;
    std::cout << std::get<2>(isc) << std::endl;
}
