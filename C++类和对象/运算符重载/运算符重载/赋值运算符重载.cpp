#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
////�༭�����ṩ4��Ĭ�ϵĺ���
////Ĭ�Ϲ��캯��-����ʵ�֣�û����
////Ĭ�Ͽ�������-��ǳ�������򵥵�ȫ������
////Ĭ����������-����ʵ�֣�û����
////Ĭ�ϸ�ֵ����-��ǳ���ƣ��򵥵�ȫ����ֵ
//
//
////��ֵ���������
////�༭��Ĭ���ṩǳ�����ĸ�ֵ����
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	//�������ʽ���ظ�ֵ�����
//	Person& operator=(Person& p)
//	{
//		//�༭���Ĵ���
//		//m_Age = p.m_Age;
//
//		//���ж��Ƿ��ж������ڴ棬��������ͷŸɾ����ٿ���
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		//���ر����Ա�����ʽ��ֵ
//		return *this;
//	}
//
//	//����ʱ�ᷢ��ǳ���������⣬�����ڴ��ظ��ͷ�
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
//	cout << "p1������Ϊ��" << *p1.m_Age << endl;
//	cout << "p2������Ϊ��" << *p2.m_Age << endl;
//	cout << "p3������Ϊ��" << *p3.m_Age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}
//
