#include <iostream>

int main()
{
    // __FILE__はこのソースのファイル名を出力する。
    std::cout << "__FILE__:" << __FILE__ << std::endl;

    // __LINE__はソースコードで__LINE__が宣言された行を出力する。
    std::cout << "__LINE__:" << __LINE__ << std::endl;

    // __func__は__func__が宣言された関数名を出力する。
    std::cout << "__func__:" << __func__ << std::endl;

    // 参照しているC++のバージョンを出力する。
    std::cout << "__cplusplus:" << __cplusplus << std::endl;
}
