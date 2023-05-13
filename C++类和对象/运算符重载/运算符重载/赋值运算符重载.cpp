#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
////编辑器会提供4个默认的函数
////默认构造函数-》空实现，没代码
////默认拷贝函数-》浅拷贝，简单地全部拷贝
////默认析构函数-》空实现，没代码
////默认赋值函数-》浅复制，简单地全部赋值
//
//
////赋值运算符重载
////编辑器默认提供浅拷贝的赋值操作
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	//深拷贝的形式重载赋值运算符
//	Person& operator=(Person& p)
//	{
//		//编辑器的代码
//		//m_Age = p.m_Age;
//
//		//先判断是否有堆区的内存，如果有先释放干净，再开辟
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		//返回本身，以便于链式赋值
//		return *this;
//	}
//
//	//析构时会发生浅拷贝的问题，堆区内存重复释放
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	int* m_Age;
//};
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}
//
