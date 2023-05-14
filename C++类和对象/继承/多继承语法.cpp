#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//多继承语法
//class 类名: 继承方式1 父类1,继承方式2 父类2……
//如果父类中有重名成员需要加上作用域
//不建议这样子写代码，麻烦

//class Base1
//{
//public:
//	Base1()
//	{
//		m_a = 100;
//	}
//	int m_a;
//};
//class Base2
//{
//public:
//	Base2()
//	{
//		m_a = 200;
//	}
//	int m_a;
//};
//
//class Son :public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_c = 300;
//		m_d = 400;
//	}
//	int m_c;
//	int m_d;
//};
//
//void test01()
//{
//	Son s;
//	cout << "Base1 的m_a = " << s.Base1::m_a << endl;
//	cout << "Base2 的m_b = " << s.Base2::m_a << endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}