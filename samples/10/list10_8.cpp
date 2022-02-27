#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    // ベクトルを生成
    std::vector<int> v;

    // ベクトルに要素を格納する
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);

    // ソート前のベクトルの内容を表示する
    int length = v.size();
    std::cout << "ソート前:";
    for (int i = 0; i < length; i++) {
        std::cout << "[" << v[i] << "]";
    }
    std::cout << std::endl;

    // ベクトルを昇順にソートする
    sort(v.begin(), v.end());

    // ソート後のベクトルの内容を出力する
    std::cout << "ソート後:";
    for (int i = 0; i < length; i++) {
        std::cout << "[" << v[i] << "]";
    }
    std::cout << std::endl;

    // ベクトルを降順にソートする
    sort(v.rbegin(), v.rend());

    // ソート後のベクトルの内容を出力する
    std::cout << "ソート後:";
    for (int i = 0; i < length; i++) {
        std::cout << "[" << v[i] << "]";
    }
    std::cout << std::endl;
    
    return 0;
}
