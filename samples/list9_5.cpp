#include <iostream>
#include <string>

// 年齢に応じた料金を返す
// std::string型の例外を返す
// throwキーワードはC++11で非推奨となり、C++17では削除されている。
int getFee(int age) throw(std::string)
{
    int fee;

    if (age < 0) {
        throw std::string("マイナスの年齢が指定されました。");
    } else if (age > 150) {
        throw std::string("年齢が大き過ぎます。");
    }

    if (age < 20) {
        fee = 500;
    } else {
        fee = 1000;
    }

    return fee;
}

int main()
{
    int age, fee;

    try
    {
        std::cout << "年齢を入力してください:";
        std::cin >> age;
        fee = getFee(age);
        std::cout << "料金は、" << fee << "円です。" << std::endl;
    }
    catch (std::string ex)
    {
        std::cout << ex << std::endl;
    }

    return 0;
}
