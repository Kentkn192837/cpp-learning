/* g++ -std=c++17 -o list12_30 list12_30.cpp */
#include <iostream>
#include <map>

int main()
{
    std::map<std::string, float> w;
    w["H"] = 1.00f;
    w["O"] = 15.99f;
    w["Cl"] = 34.97f;
    w["?"];

    // std::pairのテンプレートパラメータは推論している
    w.insert(std::pair{"Na", 22.99f});
    for (const auto& [key, value] : w) {
        std::cout << key << ':' << value << std::endl;
    }

    std::cout << "NaOH = " << w["Na"] + w["O"] + w["H"] << std::endl;
}
