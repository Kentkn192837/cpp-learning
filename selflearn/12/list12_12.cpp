#include <iostream>
#include <vector>

void print_vector(const std::vector<int> &v)
{
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v = { 1, 5, 9 };

    v.insert(v.begin(), 0);     // 先頭に0を挿入
    v.insert(v.end(), 10);      // 末尾に10を挿入

    print_vector(v);

    v.insert(v.begin() + 1, 2, 3);   // 先頭から1番目の手前に2個の3を挿入
    print_vector(v);

    int ia[] = { 6, 7, 8 };
    std::cout << ia << std::endl;
    v.insert(v.end() - 2, ia, ia + 3);
    print_vector(v);
}
