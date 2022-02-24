#include <iostream>

class MyClass
{
    private:
        int data;
    
    public:
        int getData()
        {
            return this->data;
        }

        MyClass(int data)
        {
            std::cout << "コンストラクタが呼び出されました。" << std::endl;
            this->data = data;
        }

        ~MyClass()
        {
            std::cout << "デストラクタが呼び出されました。" << std::endl;
        }

        // コピーコンストラクタ
        MyClass(const MyClass &obj)
        {
            std::cout << "コピーコンストラクタが呼び出されました。" << std::endl;
            this->data = obj.data;
        }
};

int main()
{
    MyClass obj1(123);
    MyClass obj2 = obj1;
    std::cout << "obj1のメンバ変数dataの値:" << obj1.getData() << std::endl;
    std::cout << "obj2のメンバ変数dataの値:" << obj2.getData() << std::endl;
}
