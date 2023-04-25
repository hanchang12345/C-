#include<iostream>
using namespace std;
//静态成员函数
//1.静态成员函数只能访问静态成员变量
//2.所有对象共享
//3.也有访问权限，public权限下可以在类外访问

// 静态static成员函数它只属于类本身不属于每一个对象实例，独立存在。非静态成员，仅当实例化对象之后才存在。静态成员函数产生在前，非静态成员函数产生在后，静态函数无法访问一个不存在的东西。
class Person
{
    public:
    static void func()
    {
        m_A = 200;
       // m_b = 10;不知道是哪个对象的变量，不能访问
        cout << "静态成员函数的调用" << endl;
    }
    static int m_A;
    int m_b;
};
int Person::m_A = 100;
//调用方式
//1.通过创建对象来访问
//2.通过类名访问
void test01()
{
    // 1.通过创建对象来访问
    Person p;
    p.func();
    // 2.通过类名访问
    Person::func();
}
int main()
{
    test01();
    return 0;
}