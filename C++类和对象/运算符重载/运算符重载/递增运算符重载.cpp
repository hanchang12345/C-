#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//
//class MyInt
//{
//	friend ostream& operator<<(ostream& cout, MyInt MyInterget);
//public:
//	//����ǰ��++��һ�����ݽ��в���
//	// 
//	//����MyInt�Ļ�����ÿ������캯����-���������ᱨ��
//	//++��++num�����num��1����2
//	MyInt& operator++()
//	{
//		//�ȼӼ�
//		++m_a;
//		//�ٷ�������,���Բ��ܷ���MyInt
//		return *this;
//	}
//
//	//���ú���++
//	//void operator++(int) int��ռλ��������ʾ����ǰ�úͺ���
//	//����MyInt���������ã���Ϊ���ص��Ǿֲ�������ֻ�ܷ���һ���������¶���
//	MyInt operator++(int)
//	{
//		//�ȼ�¼
//		MyInt temp = *this;
//		//�ټӼ�
//		m_a++;
//		//���ؼ�¼��ֵ
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
////���������������
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