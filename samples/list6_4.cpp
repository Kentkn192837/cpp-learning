#include <iostream>
#include "Counter.h"

int main()
{
    // 10個のカウンタを生成する
    Counter cnt[10];

    // 3番を2回アップする
    cnt[3].upVal();
    cnt[3].upVal();

    // 5番を4回アップする
    cnt[5].upVal();
    cnt[5].upVal();
    cnt[5].upVal();
    cnt[5].upVal();

    // それぞれの値を画面に表示する
    std::cout << "3番のカウンタの値 = " << cnt[3].getVal() << std::endl;
    std::cout << "5番のカウンタの値 = " << cnt[5].getVal() << std::endl;

    return 0;
}
