// #include <iostream>
// using namespace std;
// #include<string>
// //一个类的对象可以作为另一个类的成员

// //助记：
// //造汽车需要零件，所以先有零件，后有汽车
// //但是要有汽车后得到零件的一部分，需要先拆汽车，再拆零件

// // 可以看作递归调用，先是person构造调用，然后碰到phone的构造，执行phone构造后执行person
// class Phone
// {
//     public:
//     Phone(string PName)
//     {
//         m_PName = PName;
//         cout << "Phone 的构造函数调用" << endl;
//     }
//     ~Phone()
//     {
//         cout << "Phone 的析构函数调用" << endl;
//     }

//         string m_PName;
// };
// class Person
// {
// public:
//     // 相当于Phone m_phone=PName;隐式转换法
//     Person(string name,string PName):m_name(name),m_phone(PName)
//     {
//         cout << "Person 的构造函数调用" << endl;
//     }
//     ~Person()
//     {
//         cout << "Person 的析构函数调用" << endl;
//     }
//     string m_name;
//     Phone m_phone;
// };
// void test()
// {
//     Person P("张三","苹果14");

//     cout << P.m_name << "拿着 " <<P.m_phone.m_PName << endl;
// }

// int main()
// {
//     test();

//     return 0;
// }
