#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//class MyInt
//{
//	friend ostream& operator<<(ostream& cout, MyInt myint);
//public:
//	MyInt()
//	{
//		m_num = 10;
//	}
//
//	//前置减减
//	MyInt& operator--()
//	{
//		//先减减
//		--m_num;
//		//再返回本身
//		return *this;
//	}
//
//	//后置减减
//	MyInt operator--(int)
//	{
//		//先记录
//		MyInt temp = *this;
//		//再减减
//		m_num--;
//		//最后返回记录的值
//		return temp;
//	}
//
//private:
//	int m_num;
//};
//ostream& operator<<(ostream& cout, MyInt myint)
//{
//	cout << myint.m_num;
//	return cout;
//}
////前置减减
//void test01()
//{
//	MyInt myint;
//	cout << --(--myint) << endl;
//	cout << myint << endl;
//}
//
////后置减减
//void test02()
//{
//	MyInt myint;
//	cout << (myint--) << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
//
