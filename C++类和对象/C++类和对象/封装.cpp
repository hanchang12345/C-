// //#define _CRT_SECURE_NO_WARNINGS
// #include<iostream>
// using namespace std;
// #include<string>
// //C++面向对象的特性：封装，继承，多态
// //C++认为万事万物都是对象，对象都有属性和行为
// //拥有相同属性的对象可以抽象成类

// //封装的意义
// //1.属性和行为作为一个整体来表现事物
// //2.在类的设计时把行为和属性放在不同的权限下加以控制

// //设计一个圆类
// //算出周长 S=2*PI*r
// //设计是不能用int，会截断
// const double PI = 3.14;
// //语法：class 类的名称
// class Circle
// {
// //访问权限
// //公工权限
// public:
// //属性和行为统称为成员

// //属性-->一般为变量
// //属性也叫成员属性，成员变量
//     double m_r;
// //行为-->一般为函数
// //行为也叫成员函数，成员方法
//     double calculation()
//     {
//         return 2 * PI * m_r;
//     }

// };

// //创建一个学生类，有姓名，学号，年龄，
// class student
// {
//     //权限
//     public:
//     //属性
//     string m_name;
//     int m_id;
//     int m_sex;
//     //行为--打印
//     void print()
//     {
//         cout << "名字：" << m_name << endl;
//         cout << "学号:" << m_id << endl;
//         if(m_sex==1)
//             cout << "性别：男" << endl;
//         else
//             cout << "性别：女" << endl;
//     }
//     //给学生张三赋值
//     void setname(string name)
//     {
//         m_name = name;
//     }

// };
// int main()
// {
//     student zhangsan;
//     zhangsan.m_sex = 1;
//     zhangsan.m_id = 12345;
//     zhangsan.m_name = "zhangsan";
//     //步骤：
//     //调用函数setname对张三的名字赋值
//     //把名字付给了m_name
//     zhangsan.setname("张三");
//     cin >> zhangsan.m_name;
//     zhangsan.print();

//     // //创建一个圆的对象
//     // //用类名来定义，不要用class来定义
//     // //实例化：通过一个类来创建一个对象
//     // Circle c;
//     // //给圆的属性赋值
//     // c.m_r = 10;
//     // //打印圆的周长
//     // cout << "圆的周长为：" << c.calculation() << endl;
//     return 0;
// }