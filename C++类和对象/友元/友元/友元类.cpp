#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//
////��������һ��Building��,��ֹ����
//class Building;
////��������
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();
//	Building* building;
//	~GoodGay()
//	{
//		cout << "GoodGay������" << endl;
//	}
//};
//
////������
//class Building
//{
//	//������Ԫ�����Է������˽������
//	//�����Ǹ����˽�����Ծ����Ǹ��������
//	friend class GoodGay;
//public:
//	Building();
//	//�ڶ��������ģ���Ҫ�ֶ��ͷ�
//	~Building()
//	{
//		cout << "Building������" << endl;
//	}
//
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//
//};
//
//
////����ʵ�ֹ��캯������Ҫ�ں�����ǰ������Ӧ��������
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
////ʹ��Buildingָ���ڶ�������һ����������
//GoodGay::GoodGay()
//{
//	building = new Building;
//	
//	if (building == NULL)
//	{
//		return;
//	}
//}
////ʵ��visit�������ں�����ǰ����������
//void GoodGay::visit()
//{
//	//publicȨ�ޣ����Է���
//	cout << "���ڷ���:" << building->m_SittingRoom << endl;
//	//privateȨ�ޣ���Ҫ��Ԫ���ܷ���
//	cout << "���ڷ���:" << building->m_BedRoom << endl;
//}
//
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main()
//{
//	test01();
//	return 0;
//}
