#include <string>
#include "Account.h"

// 口座番号を返すメンバ関数の実装
std::string Account::getNumber()
{
    return this->number;
}

// 残高を返すメンバ関数の実装
int Account::getBalance()
{
    return this->balance;
}

// 残高を設定するメンバ関数の実装
void Account::setBalance(int balance)
{
    if (balance >= 0) {
        this->balance = balance;
    }
}

Account::Account(std::string number, int balance)
{
    this->number = number;
    this->balance = balance;
}
