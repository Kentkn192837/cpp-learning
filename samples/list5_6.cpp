#include <iostream>
#include <string>
#include "HealthChecker.h"

int main()
{
    HealthChecker yamada("山田一郎", 170, 67.5);
    std::cout << yamada.getName() << "さんのBMIは、" << yamada.getBmi() << "です。" << std::endl;
    return 0;
}
