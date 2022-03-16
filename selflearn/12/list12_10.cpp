#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = { 0, 1, 2, 3, 4 };

    for (auto iter = v.begin(); iter != v.end(); ++iter) {
        if (*iter % 2 == 0) {
            *iter /= 2;
        }
    }

    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    }
}
