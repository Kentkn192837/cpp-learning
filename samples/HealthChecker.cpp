#include <string>
#include "HealthChecker.h"

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
