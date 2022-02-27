#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void showVector(std::string title, const std::vector<int> &v)
{
    std::cout << title << std::endl;
    std::cout << "ベクトルの内容:";
    int length = v.size();
    for (int i = 0; i < length; i++) {
        std::cout << "[" << v[i] << "]";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v;

    v.push_back(111);
    v.push_back(111);
    v.push_back(111);
    v.push_back(222);
    v.push_back(222);
    showVector("***** 初期状態 *****", v);

    int num = count(v.begin(), v.end(), 111);
    std::cout << "***** 111のデータ数 *****" << std::endl;
    std::cout << num << std::endl;

    // reverse関数で逆順にする
    reverse(v.begin(), v.end());
    showVector("***** 逆順にする *****", v);

    // replace関数で置き換える
    replace(v.begin(), v.end(), 111, 222);
    showVector("***** 置き換える *****", v);

    return 0;
}
