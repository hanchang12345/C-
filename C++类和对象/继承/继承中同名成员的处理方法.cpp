#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
////子类和父类的成员重名
////访问子类的成员 直接点出来就是
////访问父类的成员 需要加作用域
//
//class Base
//{
//public:
//	Base()
//	{
//		m_a = 100;
//	}
//
//	void func()
//	{
//		cout << "Base的func函数调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base的func(int a)函数调用" << endl;
//	}
//
//	int m_a;
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_a = 200;
//	}
//
//	void func()
//	{
//		cout << "Son的func函数调用" << endl;
//	}
//	int m_a;
//
//};
//
////同名的成员属性调用
//void test01()
//{
//	Son s;
//	cout <<"Son的m_a："<< s.m_a << endl;
//	cout << "Base的m_a：" << s.Base::m_a << endl;
//}
////同名的成员函数调用
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	//编辑器会自动隐藏继承来的和子类重名的父类成员函数
//	//如果想访问父类的同名成员函数，需要加上作用域
//	//如果有参数，发生重载，也需要加上相应的参数和作用域
//	s.Base::func(100);
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//
//	return 0;
//}
