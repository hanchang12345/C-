#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
////c++中函数是有默认值
////语法：返回类型 函数名（参数值1=默认值）{}
//
////注意事项
////1.C++规定必须从形参右边开始有默认值
//// int func(int a=10,int b,int c)//error
//// {
////		return a+b+c;
//// }
////2.如果函数的声明有了默认参数，函数的实现就不能有默认参数
////声明和实现只能有一个有默认值-->编辑器不会报错，但运行不成功
////函数声明
//int func(int a = 10, int b = 10);
////函数实现
//int func(int a = 10, int b = 20)
//{
//	return a + b;
//}
////默认参数有的情况下，我传了值就用我的值，没传就用默认值
//int add(int a, int b=20, int c=30)
//{
//	return a + b + c;
//}
//int main()
//{
//	cout<<add(10)<<endl;
//	cout << func() << endl;
//	return 0;
//}
