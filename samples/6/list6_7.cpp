#include <iostream>
#include "Account.h"

int main()
{
    // 新たな口座を解説する
    Account act("12345678", 10000);

    // 口座番号と残高を表示する
    std::cout << "口座番号:" << act.getNumber();
    std::cout << ", 残高:" << act.getBalance() << std::endl;

    // 残高を更新する
    act.setBalance(30000);

    // 口座番号と残高を表示する
    std::cout << "口座番号:" << act.getNumber();
    std::cout << ", 残高:" << act.getBalance() << std::endl;

    // 残高を更新する
    act.setBalance(-20000);

    // 口座番号と残高を表示する
    std::cout << "口座番号:" << act.getNumber();
    std::cout << ", 残高:" << act.getBalance() << std::endl;
    return 0;
}
