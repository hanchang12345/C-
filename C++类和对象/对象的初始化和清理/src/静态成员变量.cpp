// #include<iostream>
// using namespace std;
// //成员前面加上static就是静态成员

// //静态成员变量
// //1.所有对象共享一块数据
// //2.在编译阶段分配内存
// //3.类内声明，类外初始化
// //A::member就表示类A中的成员member B::member就表示类B中的成员member，

// class Person
// {
// public:
//     //类内声明
//     static int m_age;
//     //静态访问变量有权限，只有public权限可以访问，其它权限访问不到
// };
// //类外初始化
// int Person::m_age = 150;
// // void test01()
// // {
// //     Person p1;
// //     //100
// //     cout << p1.m_age << endl;
// //     // 所有对象共享一块数据
// //     Person p2;
// //     //200
// //     p2.m_age = 200;
// //     cout << p1.m_age << endl;
// // }

// //访问方式
// //1.创建对象访问
// //2.类名访问

// void test02()
// {
//     // 1.创建对象访问
//     Person p;
//     cout << p.m_age << endl;
//     // 2.类名访问
//     cout << Person::m_age << endl;
// }
// int main()
// {
//    // test01();
//     test02();
//     return 0;
// }