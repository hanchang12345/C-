// #include <iostream>
// using namespace std;
// // 注意：GCC编译器现在优化了返回值类型的局部变量时，重新复制值类型的情况，所以这里拷贝构造函数不会调用
// class Person
// {
// public:
//     Person()
//     {
//         cout << "无参的构造函数调用" << endl;
//     }
//     Person(int age)
//     {
//         Age = age;
//         cout << "有参的构造函数调用" << endl;
//     }
//     Person(const Person& p)
//     {
//         Age = p.Age;
//         cout << "拷贝构造函数的调用" << endl;
//     }
//     ~Person()
//     {
//         cout << "析构函数的调用" << endl;
//     }
//     int Age;
// };

// //1.使用一个创建完成的对象来初始化一个对象
// void test01()
// {

//     Person p(20);
//     Person p2(p);
//     cout << "p2的年龄：" << p2.Age << endl;
// }
// //2.值传递的方式给函数参数传值
// void doWork(Person P1)//相当于Person P1 = P 相当于隐式转换法
// {
//     cout << "P1的年龄:" << P1.Age << endl;
// }

// void test02()
// {
//     Person P(15);
//     doWork(P);
// }
// // 3.值方式返回局部对象
// //  注意：GCC编译器现在优化了返回值类型的局部变量时，重新复制值类型的情况，所以这里拷贝构造函数不会调用
// Person doWork2()
// {
//     Person p3;
//     cout << "p3的地址：" << (int *)&p3 << endl;
//     return p3;
// }
// void test03()
// {
//     Person p4 = doWork2();
//     cout << "p4的地址：" << (int *)&p4 << endl;
// }

// int main()
// {
//     // 1.使用一个创建完成的对象来初始化一个对象
//     //test01();

//     // 2.值传递的方式给函数参数传值
//     //test02();

//     // 3.值方式返回局部对象
//     test03();
//     return 0;
// }