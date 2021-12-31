#include <iostream>
#include <math.h>

int main()
{
    double data, ans;

    std::cout << "平方根を求める数値:";
    std::cin >> data;

    ans = sqrt(data);
    std::cout << ans << std::endl;
    return 0;
}
