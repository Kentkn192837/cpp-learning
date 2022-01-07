#include <iostream>
#include <string>

class HealthChecker
{
    private:
        std::string name;   // 氏名
        double height;      // 身長
        double weight;      // 体重
        double bmi;         // BMI

    public:
        double getBmi();
        std::string getName();
        HealthChecker(std::string name, double height, double weight);
};


// BMIを返す関数
double HealthChecker::getBmi()
{
    if (this->bmi == 0) {
        double mHeight = this->height / 100;
        this->bmi = this->weight / mHeight / mHeight;
    }
    return this->bmi;
}

std::string HealthChecker::getName()
{
    return this->name;
}

// コンストラクタ
HealthChecker::HealthChecker(std::string name, double height, double weight)
{
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->bmi = 0;
}

int main()
{
    HealthChecker *ptr = new HealthChecker("山田一郎", 170, 67.5);

    std::cout << ptr->getName() << "さんのBMIは、" << ptr->getBmi() << "です。" << std::endl;

    delete ptr;
    return 0;
}
