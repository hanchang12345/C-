// #include<iostream>
// using namespace std;
// #include<string>
// //构造参数的分类：
// //1.按照参数分类：
// //有参构造函数，无参构造函数（默认构造）
// //2.按照类型分类：
// //普通构造函数，拷贝构造函数

// //调用方式：
// //1.括号法
// //2.显示法
// //3.隐私转换法
// class presion
// {

// public:
//     //无参数
//     presion()
//     {
//         cout << "无参构造函数的调用" << endl;
//     }
//     //有参数
//     presion(int a)
//     {
//         age = a;
//         cout << "有参构造函数的调用" << endl;
//     }
//     // 拷贝构造函数
//     // 把一个对象的属性拷贝到另一个对象身上
//     // 原来的对象属性不能改变，所以加const
//     // 必须要引用 这里必须这样写而不用值传递，是因为值传递操作本身就调用了一次拷贝函数，而拷贝函数里又有值传递操作，就会形成无限递归出错
//     presion(const presion& p)
//     {
//         age = p.age;
//         cout << "拷贝默认函数的调用" << endl;
//     }

//     //析构函数
//     ~presion()
//     {
//         cout << "析构函数的调用" << endl;
//     }
//     int age;
//     string name;

// };

// //调用
// void test()
// {
//     //1.括号法
//     // presion p1;//默认无参
//     // presion p2(10);//有参，传的是形参的一个值
//     // presion p3(p2);//拷贝，区别是传的是一个对象

//     //注意事项
//     //1.在调用默认构造函数是不要加(),编译器会认为这是函数的声明,不会创建对象
//     //presion p4();

//     //2.显示法
//     // presion p1;
//     // presion p2 = presion(10); //有参函数的调用
//     // presion p3 = presion(p2);//拷贝函数的调用

//     // presion(10); // 匿名对象，调用完对象后系统会立即释放掉

//     //注意事项2：
//     //不要用拷贝构造函数来初始化匿名对象，presion(p2)===presion p2,编辑器会认为这是对象的声明
//     //presion(p2);

//     // 3.隐式转换法-->很容易理解成变量的赋值
//     // 注意事项3：
//     //多个参数的隐式转换法 person p4 ={参数1,参数2,参数3,...，参数n}; （必须对应）
//     presion p1 = 10;//相当于写了presion p1=presion(10)
//     presion p2 = p1;//相当于写了presion p2=presion(p1)
// }

// int main()
// {
//     test();
//     // presion P;
//     // cout << "159357" << endl;
//     return 0;
// }


