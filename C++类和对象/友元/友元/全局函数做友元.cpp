#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
////友元：
////特殊函数或者类需要访问私有权限时
//
////用途：
////1.全局函数做友元
////2.类做友元
////3.类的成员函数做友元
//
////建筑类
//class Building
//{
//	//友元，不需要权限
//	//写法：friend 函数声明
//	friend void GoodFriend(Building* build);
//public:
//	Building()
//	{
//		m_BedRoom = "卧室";
//		m_SittingRoom = "客厅";
//	}
//
//public:
//	string m_SittingRoom;//客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//void GoodFriend(Building* build)
//{
//	//public权限，可以访问
//	cout << "正在访问：" << build->m_SittingRoom << endl;
//	//private权限，需要友元才能访问
//	cout << "正在访问：" << build->m_BedRoom << endl;
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