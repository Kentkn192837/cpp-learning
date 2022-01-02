#include <iostream>
#include <string>

struct HealthCheck {
    std::string name;   // 氏名
    double height;      // 身長
    double weight;      // 体重
    double bmi;         // BMI
};

int main()
{
    const int DATA_NUM = 3;
    HealthCheck people[DATA_NUM] = {
        {"山田太郎", 170, 67.5, 0},
        {"佐藤花子", 160, 54.5, 0},
        {"鈴木次郎", 180, 85.5, 0}
    };
    double mHeight;     // m単位の身長
    
    for (int i = 0; i < DATA_NUM; i++) {
        mHeight = people[i].height / 100;
        people[i].bmi = people[i].weight / mHeight/ mHeight;
        std::cout << people[i].name << "さんのBMIは、" << people[i].bmi << "です。" << std::endl;
    }
    
    return 0;
}
