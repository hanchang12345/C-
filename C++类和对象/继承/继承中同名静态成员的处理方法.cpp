#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

////静态成员和非静态成员的重名的处理方法完全一致，有两种访问方法
////访问子类的成员时直接点出来
////访问父类的成员时要加作用域
//
////静态成员类内声明，类外初始化
//
//class Base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "Base 的 func函数的调用" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base 的 func（int a）函数的调用" << endl;
//	}
//
//
//};
//int Base::m_a = 100;
//
//class Son : public Base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "Son 的 func函数的调用" << endl;
//	}
//
//
//};
//int Son::m_a = 200;
//
////同名静态成员属性
//void test01()
//{
//	//1.通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s;
//	cout << "Son 的static m_a为：" << s.m_a << endl;
//	cout << "Base 的static m_a为：" << s.Base::m_a << endl;
//	//2.通过类名访问
//	cout << "通过类名访问" << endl;
//	cout << "Son 的 static m_a为：" << Son::m_a << endl;
//	//第一个::代表用类名的方式访问，第二的::代表访问的是Base作用域下的m_a
//	cout << "用类名的方式访问 Base 的 static m_a为：" << Son::Base::m_a << endl;
//	cout << "直接访问 Base 的 static m_a为：" << Base::m_a << endl;
//}
////同名静态成员函数
//void test02()
//{
//	//1.通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	//2.通过类名访问
//	cout << "通过类名访问" << endl;
//	Son::func();
//	//第一个::代表用类名的方式访问，第二的::代表访问的是Base作用域下的func
//	
//	//编辑器会自动隐藏继承来的和子类重名的父类静态成员函数
//	//如果想访问父类的同名静态成员函数，需要加上作用域
//	//如果有参数，发生重载，也需要加上相应的参数和作用域
//	
//	Son::Base::func(100);
//	//直接调用
//	Base::func();
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}