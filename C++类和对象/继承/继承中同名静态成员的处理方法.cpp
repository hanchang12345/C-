#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

////��̬��Ա�ͷǾ�̬��Ա�������Ĵ�������ȫһ�£������ַ��ʷ���
////��������ĳ�Աʱֱ�ӵ����
////���ʸ���ĳ�ԱʱҪ��������
//
////��̬��Ա���������������ʼ��
//
//class Base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "Base �� func�����ĵ���" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base �� func��int a�������ĵ���" << endl;
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
//		cout << "Son �� func�����ĵ���" << endl;
//	}
//
//
//};
//int Son::m_a = 200;
//
////ͬ����̬��Ա����
//void test01()
//{
//	//1.ͨ���������
//	cout << "ͨ���������" << endl;
//	Son s;
//	cout << "Son ��static m_aΪ��" << s.m_a << endl;
//	cout << "Base ��static m_aΪ��" << s.Base::m_a << endl;
//	//2.ͨ����������
//	cout << "ͨ����������" << endl;
//	cout << "Son �� static m_aΪ��" << Son::m_a << endl;
//	//��һ��::�����������ķ�ʽ���ʣ��ڶ���::������ʵ���Base�������µ�m_a
//	cout << "�������ķ�ʽ���� Base �� static m_aΪ��" << Son::Base::m_a << endl;
//	cout << "ֱ�ӷ��� Base �� static m_aΪ��" << Base::m_a << endl;
//}
////ͬ����̬��Ա����
//void test02()
//{
//	//1.ͨ���������
//	cout << "ͨ���������" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	//2.ͨ����������
//	cout << "ͨ����������" << endl;
//	Son::func();
//	//��һ��::�����������ķ�ʽ���ʣ��ڶ���::������ʵ���Base�������µ�func
//	
//	//�༭�����Զ����ؼ̳����ĺ����������ĸ��ྲ̬��Ա����
//	//�������ʸ����ͬ����̬��Ա��������Ҫ����������
//	//����в������������أ�Ҳ��Ҫ������Ӧ�Ĳ�����������
//	
//	Son::Base::func(100);
//	//ֱ�ӵ���
//	Base::func();
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}