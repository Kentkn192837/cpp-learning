#include <iostream>
#include <string>
#include <vector>

int main()
{
    // ベクトルを生成する
    std::vector<std::string> v;

    // 任意の行数の文字列を入力する
    std::string s;
    do {
        std::cout << "文字列の入力:";
        std::cin >> s;
        v.push_back(s);
    } while (s != "..");

    // ベクトルの末尾の要素("..")を削除する
    v.pop_back();

    // ベクトルに格納された文字列を表示する
    int length = v.size();
    for (int i = 0; i < length; i++) {
        std::cout << "ベクトルの内容:" << v[i] << std::endl;
    }

    return 0;
}
