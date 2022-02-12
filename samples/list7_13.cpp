#include <iostream>
#include <string>

int main()
{
    std::string s1 = "abcdefg";
    std::string s2 = "abcdefg";

    if (s1 == s2) {
        std::cout << "等しい!" << std::endl;
    } else {
        std::cout << "等しくない!" << std::endl;
    }

    return 0;
}
