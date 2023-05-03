#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
//先声明有一个Building类,防止报错
class Building;
//好朋友类
class GoodGay
{
public:
	GoodGay();
	void visit01();//可以访问
	void visit02();//不可以访问

	Building* building;

};

//建筑类
class Building
{
	//需要加上函数相应的作用域，要不然编辑器会默认为全局函数
	friend void GoodGay::visit01();

public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

//类外实现构造函数
//初始化建筑类
Building::Building()
{
	m_BedRoom = "卧室";
	m_SittingRoom = "客厅";
}
//初始化好朋友类
GoodGay::GoodGay()
{
	building = new Building;
	if (building == NULL)
	{
		return;
	}

}
//实现visit01函数
void GoodGay::visit01()
{
	cout << "visit01正在访问：" << building->m_SittingRoom << endl;
	cout << "visit01正在访问：" << building->m_BedRoom << endl;
}

//实现visit02函数
void GoodGay::visit02()
{
	cout << "visit02正在访问：" << building->m_SittingRoom << endl;
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