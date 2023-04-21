// #include<iostream>
// using namespace std;
// #include<string>
// #include <iostream>
// using namespace std;
// #include <string>
// // 三种权限：
// // 1.公共权限 public 成员类内可以访问，类外也可访问
// // 2.保护权限 protected 成员类内可以访问，类外不可以访问 儿子也可以访问父亲的保护内容
// // 3.私有权限 private 成员类内可以访问，类外不可以访问 儿子不可以访问父亲的私有内容

// class Person
// {

// public: // 人名
//     string M_Name;

// protected: // 车
//     string M_Car;

// private: // 银行卡密码
//     int password;

// public:
//     void func()
//     {
//         M_Name = "zhangsan";
//         M_Car = "拖拉机";
//         password = 12345;
//     }
// };

// int main()
// {
//     Person P1;
//     P1.M_Name = "李四";
//     // P1.M_Car = "奔驰"; // 保护权限 protected 成员类内可以访问，类外不可以访问
//     // P1.password = 123; //私有权限  private 成员类内可以访问，类外不可以访问
//     P1.func();
//     cout << P1.M_Name << endl;
//     return 0;
// }
