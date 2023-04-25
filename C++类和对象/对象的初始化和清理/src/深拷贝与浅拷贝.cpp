#include<iostream>
using namespace std;
//浅拷贝：简单地赋值拷贝操作，编辑器的默认的都是浅拷贝
//简单地拷贝，把所有的属性全都拷贝一份
//问题：堆区的内存重复释放
//深拷贝：在堆区上重新开辟一块空间

//如果需要在堆区上开辟空间，一定要写一个自己的拷贝构造函数
//int check = 0;
// class Person
// {
// public:
//     Person()
//     {
//         cout << "Person的默认无参构造函数" << endl;
//     }
//     Person(int age,int Height)
//     {
//         m_Height = new int(Height);
//         Age = age;
//         cout << "Person的默认有参构造函数" << endl;
//     }
//     Person(const Person& p)
//     {
//         cout << "Person的拷贝构造函数" << endl;
//         Age = p.Age;
//         //m_Height=p.m_Height//编辑器自己提供的拷贝构造函数
//         //深拷贝，要解引用
//         m_Height = new int(*p.m_Height);
//     }
//     ~Person()
//     {
//         if(m_Height!=NULL/*&&check==0*/)
//         {
//             //check = 1;
//             delete m_Height;
//            // m_Height = NULL;
//         }
//         m_Height = NULL;
//         cout << "Person的析构函数调用" << endl;
//     }
//     int Age;
//     int* m_Height;
// };

// void test01()
// {
//     //栈：前进后出
//     //所以析构时，m_Height的指针会重复释放
//     Person p(10,180);
//     cout << "p的年龄为：" << p.Age <<"p的身高为："<<*p.m_Height<< endl;
//     Person p2(p);
//     cout << "p2的年龄为：" << p2.Age <<"p2的身高为：" << *p2.m_Height << endl;
// }

// int main()
// {
//     test01();
//     return 0;
// }