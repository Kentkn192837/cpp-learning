#include <iostream>
#include <math.h>

bool quadEq(double a, double b, double c, double *px1, double *px2)
{
    double inRoot;
    bool ans;

    inRoot = pow(b, 2) - 4 * a * c;

    if (inRoot < 0) {
        // 解なし
        ans = false;
    } else {
        ans = true;
        *px1 = (-b + sqrt(inRoot)) / (2 * a);
        *px2 = (-b - sqrt(inRoot)) / (2 * a);
    }

    return ans;
}

int main()
{
    double a, b, c;         // 二次方程式の係数
    double x1, x2;          // 二次方程式の解
    bool ans;               // 解が存在するかどうかの判定

    std::cout << "a = ";
    std::cin >> a;

    std::cout << "b = ";
    std::cin >> b;

    std::cout << "c = ";
    std::cin >> c;

    ans = quadEq(a, b, c, &x1, &x2);

    if (ans) {
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    } else {
        std::cout << "解なし" << std::endl;
    }
    
    return 0;
}
