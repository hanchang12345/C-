#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//
//class MyInt
//{
//	friend ostream& operator<<(ostream& cout, MyInt MyInterget);
//public:
//	//重置前置++对一个数据进行操作
//	// 
//	//返回MyInt的话会调用拷贝构造函数，-》本机器会报错
//	//++（++num）后的num是1不是2
//	MyInt& operator++()
//	{
//		//先加加
//		++m_a;
//		//再返回自身,所以不能返回MyInt
//		return *this;
//	}
//
//	//重置后置++
//	//void operator++(int) int是占位参数，表示区分前置和后置
//	//返回MyInt，不能引用，因为返回的是局部变量，只能返回一个拷贝的新对象
//	MyInt operator++(int)
//	{
//		//先记录
//		MyInt temp = *this;
//		//再加加
//		m_a++;
//		//返回记录的值
//		return temp;
//	}
//
//	MyInt()
//	{
//		m_a = 0;
//	}
//private:
//	int m_a;
//};
////重载左移运算符：
//ostream& operator<<(ostream& cout,MyInt MyInterget)
//{
//	cout << MyInterget.m_a ;
//	return cout;
//}
//
//void test01()
//{
//	MyInt MyInterget;
//	cout << ++(++MyInterget) << endl;
//	cout << MyInterget << endl;
//
//}
//void test02()
//{
//	MyInt MyInterget;
//	cout << MyInterget++ << endl;
//	cout << MyInterget << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//
//	/*int a = 0;
//	cout << ++(++a) << endl;
//	cout << a << endl;*/
//	return 0;
//}