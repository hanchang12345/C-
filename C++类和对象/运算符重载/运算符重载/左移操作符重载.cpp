//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
////���ã������Ԫ��������Զ������������
////�����������<<
//
////���������������һ�㲻��ʹ�ó�Ա����ʵ��
////��Ϊ�޷�ʵ��cout����ߵ����
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	//���������������һ�㲻��ʹ�ó�Ա����ʵ��
//	//��Ϊ�޷�ʵ��cout����ߵ����
//	//void operator<<( cout )//p->operator(p)
//	//{
//	//}
//	Person(int c, int d)
//	{
//		this->m_c = c;
//		this->m_d = d;
//	}
//	int m_a;
//	int m_b;
//private:
//	int m_c;
//	int m_d;
//};
//
//ostream& operator<<(ostream& cout ,Person& p)
//{
//	cout << "p1��m_a:" << p.m_a << " p1��m_b:" << p.m_b<<endl;
//	cout << "p1��m_c:" << p.m_c << " p1��m_d:" << p.m_d<<endl;
//	return cout;
//}
//
//void test01()
//{
//	Person p1(20,20);
//	p1.m_a = 10;
//	p1.m_b = 10;
//	cout << p1<<endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}