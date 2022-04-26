/* g++ -std=c++17 -o list13_8 list13_8.cpp */
#include <iostream>
#include <string>

int main()
{
    std::string s0;

    s0.assign("Hello");
    std::cout << "s0: " << s0 << std::endl;  // Hello

    s0.assign("Hello", 4);
    std::cout << "s0: " << s0 << std::endl;  // Hell

    std::string s1 = "Hello";
    s0.assign(s1);
    std::cout << "s0: " << s0 << std::endl;  // Hello
    
    s0.assign(3, '?');
    std::cout << "s0: " << s0 << std::endl;  // ???

    s0.assign({'a', 'b', 'c'});
    std::cout << "s0: " << s0 << std::endl;  // abc

    s0.assign(s1.begin() + 1, s1.end() - 1);
    std::cout << "s0: " << s0 << std::endl;  // ell

    s0.assign(s1, 1, 3);
    std::cout << "s0: " << s0 << std::endl;  // ell
}
