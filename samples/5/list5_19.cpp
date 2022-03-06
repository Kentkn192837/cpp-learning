#include <iostream>
#include <string>

class HealthChecker
{
    private:
        static const int STD_BMI = 22;
        std::string name;
        double height;
        double weight;
        double bmi;
    
    public:
        static int getStdBmi();
        double getStdWeight();
        double getBmi();
        std::string getName();
        HealthChecker(std::string name, double height, double weight, double bmi);
};

HealthChecker::HealthChecker(std::string name, double height, double weight, double bmi)
{
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->bmi = 0;
}

int HealthChecker::getStdBmi()
{
    return HealthChecker::STD_BMI;
}

double HealthChecker::getStdWeight()
{
    double mHeight = this->height / 100;
    return HealthChecker::STD_BMI * mHeight * mHeight;
}

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

int main()
{
    std::cout << "標準BMIは、" << HealthChecker::getStdBmi() << "です。" << std::endl;

    HealthChecker yamada("山田一郎", 170, 67.5, 22);

    std::cout << yamada.getName() << "さんのBMIは、" << yamada.getBmi() << "です。" << std::endl;
    std::cout << "標準体重は、" <<yamada.getStdWeight() << "です。" << std::endl;
    return 0;
}
