#include <iostream>

int main()
{
    using namespace std;
    string name;
    string add;
    cout <<"请输入你的姓名："<<endl;
    cin >> name;
    cout <<"请输入你的地址："<<endl;
    cin>> add;
    cout <<"你的姓名是："<< name <<",你的地址是："<< add <<"。"<<endl;
    class Derived : public Base
    public:
    Derived(){};
    ~Derived(){};
    virtual void printClass(int num = 20) override {printf("Derived num is : %d\n", num);};
    return 0;
}
