#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
////����͸���ĳ�Ա����
////��������ĳ�Ա ֱ�ӵ��������
////���ʸ���ĳ�Ա ��Ҫ��������
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
//		cout << "Base��func��������" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base��func(int a)��������" << endl;
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
//		cout << "Son��func��������" << endl;
//	}
//	int m_a;
//
//};
//
////ͬ���ĳ�Ա���Ե���
//void test01()
//{
//	Son s;
//	cout <<"Son��m_a��"<< s.m_a << endl;
//	cout << "Base��m_a��" << s.Base::m_a << endl;
//}
////ͬ���ĳ�Ա��������
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	//�༭�����Զ����ؼ̳����ĺ����������ĸ����Ա����
//	//�������ʸ����ͬ����Ա��������Ҫ����������
//	//����в������������أ�Ҳ��Ҫ������Ӧ�Ĳ�����������
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
