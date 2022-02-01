#include <iostream>
#include <string>

class Human
{
    protected:
        std::string name;

    public:
        void speak();
        void speakWithDecoration();
        Human(std::string name);
};

void Human::speak()
{
    std::cout << "氏名:" << this->name << std::endl;
}

void Human::speakWithDecoration()
{
    std::cout << "★★★★★★★★★★" << std::endl;
    this->speak();
    std::cout << "★★★★★★★★★★" << std::endl;
}

Human::Human(std::string name)
{
    this->name = name;
}

// Humanクラスを継承
class Student : public Human
{
    protected:
        std::string number;     // 学籍番号を格納するメンバ変数
    
    public:
        void speak();
        Student(std::string name, std::string number);
};

void Student::speak()
{
    Human::speak();
    std::cout << "学籍番号:" << this->number << std::endl;
}

int main()
{
    Student yamada("山田一郎", "ABC123456");
    yamada.speak();
    return 0;
}
