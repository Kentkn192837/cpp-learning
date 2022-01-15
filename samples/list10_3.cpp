#include <iostream>

template <class T> T getMin(T a, T b)
{
    return a < b ? a : b;
}

template <class T1, class T2> T1 getMin(T1 a[], T2 length)
{
    T1 ans = a[0];
    for (T2 i = 1; i < length; i++) {
        if (ans > a[i]) {
            ans = a[i];
        }
    }
    return ans;
}

int main()
{
    int a = 123;
    int b = 456;
    int c = getMin(a, b);
    std::cout << c << std::endl;

    double x = 1.23;
    double y = 4.56;
    double z = getMin(x, y);
    std::cout << z << std::endl;

    char cArray[] = {'c', 'b', 'f', 'a', 'e'};
    int cLength = 5;
    char cAns = getMin(cArray, cLength);
    std::cout << cAns << std::endl;

    float fArray[] = {2.22F, 3.33F, 1.11F, 5.55F, 4.44F};
    int fLength = 5;
    float fAns = getMin(fArray, fLength);
    std::cout << fAns << std::endl;
    return 0;
}
