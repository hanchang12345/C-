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
//	//ǰ�ü���
//	MyInt& operator--()
//	{
//		//�ȼ���
//		--m_num;
//		//�ٷ��ر���
//		return *this;
//	}
//
//	//���ü���
//	MyInt operator--(int)
//	{
//		//�ȼ�¼
//		MyInt temp = *this;
//		//�ټ���
//		m_num--;
//		//��󷵻ؼ�¼��ֵ
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
////ǰ�ü���
//void test01()
//{
//	MyInt myint;
//	cout << --(--myint) << endl;
//	cout << myint << endl;
//}
//
////���ü���
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
