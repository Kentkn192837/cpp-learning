#include <iostream>
#include <string>
#include <queue>
#include <stack>

int main()
{
    // キューを作成する
    std::queue<std::string> q;

    // キューにデータを格納する
    q.push("データ1");
    q.push("データ2");
    q.push("データ3");

    // キューからデータを取り出す
    std::cout << "***** キュー *****" << std::endl;
    while (!q.empty()) {
        std::cout << q.front() << std::endl;
        q.pop();
    }

    // スタックを作成する
    std::stack<std::string> s;

    // スタックにデータを格納する
    s.push("データ1");
    s.push("データ2");
    s.push("データ3");

    // スタックからデータを取り出す
    std::cout << "***** スタック *****" << std::endl;
    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    return 0;
}
