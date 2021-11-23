#include <iostream>
#include <string>
#include <vector>

int main()
{
    // 空のコンテナの生成
    // std::vector<int> iv;

    // std::string("apple")を要素として5つもつstd::vectorの生成
    std::vector<std::string> sv{5, "apple"};
    std::cout << "std::vector<std::string> sv{5, \"apple\"}; の内部" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << sv[i] << std::endl;
    }
    std::cout << "------------" << std::endl;

    std::vector<int> iv0 = {1, 2, 3, 4, 5};

    // std::vectorのコピー
    // iv をiv1にコピー
    std::vector<int> iv1 = iv0;
    for (int i = 0; i < 5; i++) {
        std::cout << iv1[i] << std::endl;
    }
}
