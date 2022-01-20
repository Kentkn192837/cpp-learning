#include <iostream>
#include <string>
#include <map>

int main()
{
    // マップを作成する
    std::map<std::string, std::string> m;

    // マップにキーと値を格納する
    m.insert(std::make_pair("K001", "apple"));
    m.insert(std::make_pair("K005", "orange"));
    m.insert(std::make_pair("K003", "melon"));
    m.insert(std::make_pair("K002", "banana"));
    m.insert(std::make_pair("K004", "lemon"));

    // キーに対応する値を表示する
    std::string num;
    do {
        std::cout << "商品番号:";
        std::cin >> num;
        // count関数はキーに対応する値が何個あるかを返す
        if (m.count(num) != 0) {
            std::cout << "対応する商品名:" << m[num] << std::endl;
        }
    } while (num != "..");
    
    return 0;
}
