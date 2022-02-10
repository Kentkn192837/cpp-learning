#include <iostream>
#include <cstring>

int main()
{
    char s1[] = "abcdefg";
    char s2[] = "abcdefg";

    if (strcmp(s1, s2) == 0) {
        std::cout << "等しい!" << std::endl;
    } else {
        std::cout << "等しくない!" << std::endl;
    }

    return 0;
}
