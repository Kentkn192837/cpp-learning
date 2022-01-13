#include <iostream>
#include <string>

int main()
{
    int n;

    try
    {
        std::cout << "1. int型の例外、2. double型の例外、3. string型の例外:";
        std::cin >> n;
        if (n == 1) throw -1;
        if (n == 2) throw -123.456;
        if (n == 3) throw std::string("文字列");
    }
    catch (int intEx)
    {
        std::cout << "int型の例外:" << intEx << std::endl;
    }
    catch (double dblEx)
    {
        std::cout << "double型の例外:" << dblEx << std::endl;
    }
    catch (std::string strEx)
    {
        std::cout << "string型の例外:" << strEx << std::endl;
    }
    catch (...)
    {
        std::cout << "あらゆる例外:" << std::endl;
    }
}
