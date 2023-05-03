#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//
////先声明有一个Building类,防止报错
//class Building;
////好朋友类
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();
//	Building* building;
//	~GoodGay()
//	{
//		cout << "GoodGay的析构" << endl;
//	}
//};
//
////建筑类
//class Building
//{
//	//类做友元，可以访问类的私有属性
//	//访问那个类的私有属性就在那个类里加上
//	friend class GoodGay;
//public:
//	Building();
//	//在堆区创建的，需要手动释放
//	~Building()
//	{
//		cout << "Building的析构" << endl;
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
////类外实现构造函数，需要在函数名前加上相应的作用域
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
////使用Building指针在堆区创建一个建筑对象
//GoodGay::GoodGay()
//{
//	building = new Building;
//	
//	if (building == NULL)
//	{
//		return;
//	}
//}
////实现visit函数，在函数名前加上作用域
//void GoodGay::visit()
//{
//	//public权限，可以访问
//	cout << "正在访问:" << building->m_SittingRoom << endl;
//	//private权限，需要友元才能访问
//	cout << "正在访问:" << building->m_BedRoom << endl;
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
