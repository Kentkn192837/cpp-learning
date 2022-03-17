#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = { 0, 1, 2, 3, 4};
    
    for (auto iter = v.rbegin(); iter != v.rend(); ++iter) {
        const std::type_info &info = typeid(iter);
        std::cout << info.name() << ' ' << *iter << std::endl;
    }
}
