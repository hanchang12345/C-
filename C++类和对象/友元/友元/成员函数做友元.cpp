#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
//��������һ��Building��,��ֹ����
class Building;
//��������
class GoodGay
{
public:
	GoodGay();
	void visit01();//���Է���
	void visit02();//�����Է���

	Building* building;

};

//������
class Building
{
	//��Ҫ���Ϻ�����Ӧ��������Ҫ��Ȼ�༭����Ĭ��Ϊȫ�ֺ���
	friend void GoodGay::visit01();

public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

//����ʵ�ֹ��캯��
//��ʼ��������
Building::Building()
{
	m_BedRoom = "����";
	m_SittingRoom = "����";
}
//��ʼ����������
GoodGay::GoodGay()
{
	building = new Building;
	if (building == NULL)
	{
		return;
	}

}
//ʵ��visit01����
void GoodGay::visit01()
{
	cout << "visit01���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit01���ڷ��ʣ�" << building->m_BedRoom << endl;
}

//ʵ��visit02����
void GoodGay::visit02()
{
	cout << "visit02���ڷ��ʣ�" << building->m_SittingRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit01();
	gg.visit02();
}
int main()
{
	test01();
	return 0;
}