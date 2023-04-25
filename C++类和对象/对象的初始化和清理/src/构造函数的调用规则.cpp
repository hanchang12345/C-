// #include<iostream>
// using namespace std;
// //当创建一个类后c++默认提供三种函数
// //1.默认构造函数（无参，空）
// //2.默认析构函数（无参，空）
// //3.默认拷贝构造函数（对属性进行值拷贝）

// //当自己写了构造函数时，c++不会提供默认无参构造函数，但还是会提供默认拷贝构造函数
// //当自己写了拷贝构造函数时，编辑器不会提供任何的构造函数
// class Person
// {
// public:
//     // Person()
//     // {
//     //     cout << "默认构造函数的调用" << endl;
//     // }
//     // Person(int age)
//     // {
//     //     Age = age;
//     //     cout << "有参构造函数的调用" << endl;
//     // }
//     Person(const Person& p)
//     {
//         Age = p.Age;
//         cout << "默认拷贝构造函数的调用" << endl;
//     }
//     ~Person()
//     {
//         cout << "默认析构函数的调用" << endl;
//     }

//     int Age;
// };
// //当创建一个类后c++ 默认提供三种函数 
// // void test()
// // {
// //     Person p;
// //     p.Age = 10;
// //     Person p2(p);
// //     cout << "p2的年龄为" << p2.Age << endl;
// // }

// // 当自己写了构造函数时，c++不会提供默认无参构造函数，但还是会提供默认拷贝构造函数
// // void test02()
// // {
// //     //Person p;
// //     Person p(27);
// //     Person p2(p);
// //     cout << "p2的年龄为" << p2.Age << endl;
// // }

// // 当自己写了拷贝构造函数时，编辑器不会提供任何的构造函数

// // void test0()
// // {
// //     //error:
// //     //Person p;
// //     //Person p(27);
// //     //Person p2(p);
// //     //cout << "p2的年龄为" << p2.Age << endl;
// // }
// int main()
// {
//     // test();
//     // test02();
//     // test03();
//     return 0;
// }