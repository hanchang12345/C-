#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
////��Ԫ��
////���⺯����������Ҫ����˽��Ȩ��ʱ
//
////��;��
////1.ȫ�ֺ�������Ԫ
////2.������Ԫ
////3.��ĳ�Ա��������Ԫ
//
////������
//class Building
//{
//	//��Ԫ������ҪȨ��
//	//д����friend ��������
//	friend void GoodFriend(Building* build);
//public:
//	Building()
//	{
//		m_BedRoom = "����";
//		m_SittingRoom = "����";
//	}
//
//public:
//	string m_SittingRoom;//����
//private:
//	string m_BedRoom;//����
//};
//
//void GoodFriend(Building* build)
//{
//	//publicȨ�ޣ����Է���
//	cout << "���ڷ��ʣ�" << build->m_SittingRoom << endl;
//	//privateȨ�ޣ���Ҫ��Ԫ���ܷ���
//	cout << "���ڷ��ʣ�" << build->m_BedRoom << endl;
//}
//void test01()
//{
//	Building build;
//	GoodFriend(&build);
//}
//int main()
//{
//	test01();
//	return 0;
//}