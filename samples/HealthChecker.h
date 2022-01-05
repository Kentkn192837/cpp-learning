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
